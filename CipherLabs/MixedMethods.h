#ifndef MIXEDMETHODS_H
#define MIXEDMETHODS_H

using namespace std;

#include "Caesar.h"
#include "ColAndRows.h"
#include <vector>
#include <string>
#include <utility>

class MixedMethods : public Caesar, public ColAndRows {
public:

    MixedMethods(int key) : Caesar(), ColAndRows(key) {}
    
    string encrypt(const string &text, int key) override;
    string decrypt(const string &text, int key) override;


};

#endif 
