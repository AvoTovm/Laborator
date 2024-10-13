#ifndef REL_H
#define REL_H

using namespace std;

#include "Cipher.h"
#include <vector>
#include <string>
#include <utility>

class Rel : public Cipher {
public:
    
    string encrypt(const string &text, int key ) override;
    string decrypt(const string &text, int key ) override;


};

#endif 
