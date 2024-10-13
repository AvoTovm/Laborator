#include <iostream>
#include <cstring>
using namespace std;

void encodeV(const char str[], const char key[], char encoded[], const char Alphabet[]) {
    int k = strlen(str);
    
    for(int i = 0; i < k; i++){

        int strIndex = 0;

        for(int j = 0; j < 26; j++){
            if(str[i] == Alphabet[j]){
                strIndex = j;
                break;
            }
        }

        int keyIndex = 0;
        for(int j = 0; j < 26; j++){
            if(key[i] == Alphabet[j]){ 
                keyIndex = j;
                break;
            }
        }

        encoded[i] = Alphabet[(strIndex + keyIndex) % 26];
    }
    encoded[k] = '\0';
}

void decodeV(const char encoded[], const char key[], char decoded[], const char Alphabet[]) {
    int k = strlen(encoded);
    
    for(int i = 0; i < k; i++){
        int encIndex = 0, keyIndex = 0;

        for(int j = 0; j < 26; j++){
            if(encoded[i] == Alphabet[j]){
                encIndex = j;
                break;
            }
        }

        for(int j = 0; j < 26; j++){
            if(key[i] == Alphabet[j]){
                keyIndex = j;
                break;
            }
        }

        decoded[i] = Alphabet[(encIndex - keyIndex + 26) % 26];
    }
    decoded[k] = '\0';
}

int main() {
    char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    
    char str[1000], key[1000];
    cout << "Enter string -- ";
    cin >> str;
    cout << "Enter the key by string lenght -- ";
    cin >> key; 

    char encoded[1000], decoded[1000];
    
    encodeV(str, key, encoded, Alphabet);
    cout << "Encoded " << encoded << endl;

    decodeV(encoded, key, decoded, Alphabet);
    cout << "Decoded " << decoded << endl;

}
