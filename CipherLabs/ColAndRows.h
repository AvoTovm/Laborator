#ifndef COLANDROWS_H
#define COLANDROWS_H

using namespace std;

#include "Cipher.h"
#include <vector>
#include <cstring>


class ColAndRows : public Cipher {
public:
    ColAndRows(int k);
    
    
    string encrypt(const string &text, int key) override;
    string decrypt(const string &text, int key) override;

private:
    int key;
};

#endif 
