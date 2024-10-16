#include "Rel.h"

using namespace std;

#include <sstream> 

string Rel::encrypt(const string &text, int key) {
    if (text.empty()) return "";

    ostringstream encryptedText;
    int count = 1;

    for (int i = 0; i < text.size(); ++i) {
        if (i < text.size() - 1 && text[i] == text[i + 1]) {
            count++;
        } else {
            encryptedText << text[i] << count;
            count = 1;
        }
    }

    return encryptedText.str();
}

string Rel::decrypt(const string &text, int key) {
    if (text.empty()) return "";

    ostringstream decryptedText;
    for (int i = 0; i < text.size(); i += 2) {
        char c = text[i];
        int count = text[i + 1] - '0';  
        decryptedText << string(count, c); 
    }

    return decryptedText.str();
}
