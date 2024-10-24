#ifndef CIPHER_H
#define CIPHER_H

#include <string>
using namespace std;

class Cipher {
public:

    virtual string encrypt(const string &text, int key) = 0;
    virtual string decrypt(const string &text, int key) = 0;
    
    
    virtual ~Cipher() = default;
};

#endif
