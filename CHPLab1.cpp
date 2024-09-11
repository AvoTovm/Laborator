#include <iostream>
using namespace std;

void MaxMin(int a, int b){
    int c = 0;

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