#include <iostream>
#include "Caesar.h"
#include "ColAndRows.h"
#include "Rel.h"
#include "MixedMethods.h"

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
    
    //MixedMethods--------------------------------------------------------------
    cout<<endl;
    
    string text3 = "Hello World";
    int key2 = 3;
    
    MixedMethods method1(key2);
    string methodEncrypt = method1.encrypt(text3 , key2);
    cout<<"Method1 Encrypted-- "<<methodEncrypt<<endl;
    cout<<"Method1 Decrypted-- "<<method1.decrypt(methodEncrypt, key2)<<endl;
    
}
