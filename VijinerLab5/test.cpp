#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    char str[] = "program";
    char key[] = "dogdogd";
    int k = strlen(str);
    char encode[8];
    
    for(int i = 0; i < k; i++){
        int temp = 0;
        for(int j = 0; j < 26; j++){
            
            if(str[i] == Alphabet[j]){
                temp = j;
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

        encode[i] = Alphabet[(temp + keyIndex) % 26];
    }
    encode[k] = '\0';

    cout << "Encoded --- " << encode << endl;

    return 0;
}
