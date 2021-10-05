#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 1;
    int sum = 0;

    while(a>=1){
        sum +=(a*b)*(a*b);
        a -= 1;
        b += 1;
    }

    cout << sum << endl;
}