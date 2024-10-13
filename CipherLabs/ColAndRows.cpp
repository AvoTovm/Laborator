#include "ColAndRows.h"
#include <vector>

using namespace std;

ColAndRows::ColAndRows(int k) :
key(k) {}

string ColAndRows::encrypt(const string &text, int key) {
    int p = text.size();
    int rows = p / key + (p % key != 0);
    vector<vector<char>> matrix(rows, vector<char>(key, ' '));

    int h = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < key; j++) {
            if (h < p) {
                matrix[i][j] = text[h];
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

string ColAndRows::decrypt(const string &text, int key) {
    int p = text.size();
    int rows = p / key + (p % key != 0);
    vector<vector<char>> matrix(rows, vector<char>(key, ' '));

    int h = 0;
    for (int j = 0; j < key; j++) {
        for (int i = 0; i < rows; i++) {
            if (h < p) {
                matrix[i][j] = text[h];
            }
            h++;
        }
    }

    string decryptedText;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < key; j++) {
            if (matrix[i][j] != '\0') {
                decryptedText += matrix[i][j];
            }
        }
    }

    return decryptedText;
}
