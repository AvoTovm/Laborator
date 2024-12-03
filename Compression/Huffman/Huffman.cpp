#include "Huffman.h"
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

Huffman::Huffman() : root(nullptr) {}

void Huffman::generateCodes(Node* node, string code){
    if(!node) return;
    if(!node->left && !node->right) codes[node->ch] = code;
    generateCodes(node->left, code + "0");
    generateCodes(node->right, code + "1");
}

Node* Huffman::buildTree(const unordered_map<char, int>& freq){
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for(const auto& p : freq) pq.push(new Node(p.first, p.second));
    while(pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        Node* node = new Node('\0', left->freq + right->freq);
        node->left = left;
        node->right = right;
        pq.push(node);
    }
    return pq.top();
}

string Huffman::compress(const string& text){
    unordered_map<char, int> freq;
    for(char ch : text) freq[ch]++;
    root = buildTree(freq);
    generateCodes(root, "");
    string encoded = "";
    for(char ch : text) encoded += codes[ch];

    cout<<"Huffman Codes \n";
    for(const auto& p : codes){
        cout<<p.first <<": "<<p.second<<endl;
    }
    cout<<"Encoded "<<encoded<<endl;
    return encoded;
}

string Huffman::decompress(const string& encoded){
    string decoded = "";
    Node* current = root;
    for(char bit : encoded){
        if(bit == '0') current = current->left;
        else current = current->right;

        if(!current->left && !current->right){
            decoded += current->ch;
            current = root;
        }
    }
    cout<<"Decoded "<<decoded<<endl;
    return decoded;
}