#include "MixedMethods.h"

using namespace std;


string MixedMethods::encrypt(const string &text ,int key) {

    string caesarEncrypted = Caesar::encrypt(text , key);   
    return ColAndRows::encrypt(caesarEncrypted , key);       
}

string MixedMethods::decrypt(const string &text ,int key) {

    string colAndRowsDecrypted = ColAndRows::decrypt(text , key); 
    return Caesar::decrypt(colAndRowsDecrypted , key);             
}
