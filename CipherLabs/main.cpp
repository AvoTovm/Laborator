#include <iostream>
#include "Caesar.h"
#include "ColAndRows.h"
#include "Rel.h"

using namespace std;

int main() {
    
    //Caesar-----------------------------------------------------------------------
    string text = "Hello World";
    int key = 5;
    
    Caesar caesar;
    

    string caesarEncrypted = caesar.encrypt(text, key);
    cout << "Caesar Encrypted -- " << caesarEncrypted << endl;
    cout << "Caesar Decrypted -- " << caesar.decrypt(caesarEncrypted, key) << endl;


    //ColAndRows-----------------------------------------------------------------------
    
    cout << endl;
    
    ColAndRows colAndRows(key);
    string colAndRowsEncrypted = colAndRows.encrypt(text, key);
    cout << "ColAndRows Encrypted -- " << colAndRowsEncrypted << endl;
    cout << "ColAndRows Decrypted -- " << colAndRows.decrypt(colAndRowsEncrypted, key) << endl;
    
    //Rel-----------------------------------------------------------------------
    
    cout << endl;
    string text2 = "HHHHEEEELLLLOOOOOO";
    
    
    Rel rel;
    string relEncrypted = rel.encrypt(text2, 0);
    cout << "Rel Encrypted -- " << relEncrypted << endl;
    cout << "Rel Decrypted -- " << rel.decrypt(relEncrypted, 0) << endl;
}
