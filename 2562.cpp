#include <iostream>
using namespace std;

int main(){
    int i, M_line, Max = 0;
    int Number[9];

    for(i=0; i<9; i++){
        cin >> Number[i];

        if(Number[i]>Max){
            Max = Number[i];
            M_line = i+1;
        }
    }

    cout << Max <<endl;
    cout << M_line <<endl;

    return 0;
}