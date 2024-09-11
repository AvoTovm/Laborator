#include <iostream>
#include <cmath>

using namespace std;

void MaxMin(int a, int b){

    a = abs(a);
    b = abs(b);
    while(a != b){
        while(a > b){
            
            a = a - b;
        }
        while(a < b){

            b = b - a;

        }
    }

    cout<<a;
};

int main(){
    
    MaxMin(6,9);

}
