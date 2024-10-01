#include <iostream>
#include <string>
using namespace std;

class CaesarCipher {

public:
    string encode(const string &text, int key) {
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

    string decode(const string &text, int key) {
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

    private:

    int normalizeShift(int key) {
        return (key % 95 + 95) % 95;
    }

};

int main() {
    CaesarCipher cipher;

    cout<<"input string"<<endl;
    string text;
    cin>>text;

    cout<<"input key"<<endl;
    int key;
    cin>>key;

    string encoded = cipher.encode(text, key);
    cout << "Encoded: " << encoded << endl;

    string decoded = cipher.decode(encoded, key);
    cout << "Decoded: " << decoded << endl;

}