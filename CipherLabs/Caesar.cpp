#include "Caesar.h"


using namespace std;


string Caesar::encrypt(const string &text, int key) {
    string encodedText = "";
    int normalized = normalizeShift(key);

    for (char c : text) {
        if (c >= 0 && c <= 255) {
            char encodedChar = (c  + normalized) % 256;
            encodedText += encodedChar;
        } else {
            encodedText += c;
        }
    }
    return encodedText;
}



string Caesar::decrypt(const string &text, int key) {
    string decodedText = "";
    int normalized = normalizeShift(key);

    for (char c : text) {
        if (c >= 0 && c <= 255) {
            char decodedChar = (c - normalized + 256) % 256;
            decodedText += decodedChar;
        } else {
            decodedText += c;
        }
    }
    return decodedText;
}


int Caesar::normalizeShift(int key) {
    return (key % 256 + 256) % 256;
}
