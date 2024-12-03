#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <string>
#include <unordered_map>

using namespace std;

struct Node{
    char ch;
    int freq;
    Node *left, *right;

    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

struct Compare{
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

class Huffman{
private:
    Node* root;
    unordered_map<char, string> codes;

    void generateCodes(Node* node, string code);
    Node* buildTree(const std::unordered_map<char, int>& freq);

public:
    Huffman();
    string compress(const string& text);
    string decompress(const string& encoded);
};

#endif