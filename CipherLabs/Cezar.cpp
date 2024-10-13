#include "Caesar.h"


using namespace std;


string Caesar::encrypt(const string &text, int key) {
    string encodedText = "";
    int normalized = normalizeShift(key);

    for (char c : text) {
        if (c >= 32 && c <= 126) {
            char encodedChar = 32 + (c - 32 + normalized) % 95;
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
        if (c >= 32 && c <= 126) {
            char decodedChar = 32 + (c - 32 - normalized + 95) % 95;
            decodedText += decodedChar;
        } else {
            decodedText += c;
        }
    }
    return decodedText;
}


int Caesar::normalizeShift(int key) {
    return (key % 95 + 95) % 95;
}
