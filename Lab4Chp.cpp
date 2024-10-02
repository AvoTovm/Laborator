#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class ColAndRowsCipher {
public:
    ColAndRowsCipher(int k) : key(k) {}

    string encrypt(const char* t) {
        int p = strlen(t);
        int rows = p / key + (p % key != 0);
        vector<vector<char>> matrix(rows, vector<char>(key, ' '));

        int h = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < key; j++) {
                if (h < p) {
                    matrix[i][j] = t[h];
                }
                h++;
            }
        }

        string encryptedText;
        for (int j = 0; j < key; j++) {
            for (int i = 0; i < rows; i++) {
                encryptedText += matrix[i][j];
            }
        }

        return encryptedText;
    }

private:
    int key;
};

int main() {
    int key;
    cout << "Enter the key ";
    cin >> key;

    cin.ignore();

    char text[1000];
    cout << "Enter the text --- ";
    cin.getline(text, 1000);

    ColAndRowsCipher cipher(key);
    string encrypted = cipher.encrypt(text);

    cout << "Encrypted text ---  " << encrypted << endl;

    return 0;
}
