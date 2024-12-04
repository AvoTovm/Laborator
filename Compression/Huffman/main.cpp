#include "Huffman.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    cout<<"Enter text --";
    getline(cin, text);

    Huffman huffman;
    string encoded = huffman.compress(text);
    huffman.decompress(encoded);
}
