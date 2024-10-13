#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> Tox = {'a', 'a', 'a', 'a', 'b', 'b', 'b', 'c', 'c'};
    vector<pair<char, int>> Str;
    int count = 1;

    for (size_t i = 0; i < Tox.size(); i++) {
        if (i < Tox.size() - 1 && Tox[i] == Tox[i + 1]) {
            count++;
        } else {
            Str.push_back(make_pair(Tox[i], count));
            count = 1;
        }
    }

    for (const auto& p : Str) {
        cout << p.first<< p.second;
    }
    
    return 0;
}
