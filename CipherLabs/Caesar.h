#ifndef CAESAR_H
#define CAESAR_H

#include "Cipher.h"
using namespace std;

class Caesar : public Cipher {
public:

    string encrypt(const string &text, int key) override;
    string decrypt(const string &text, int key) override;
    

private:
    int normalizeShift(int key);
};

#endif
