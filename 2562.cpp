#include <iostream>
using namespace std;

int main(){
    int i, Max, M_line;
    int Number[9];

    for(i=0; i<9; i++) cin >> Number[i];

    Max = Number[0];

    for(i=0; i<9; i++){
        
        if(Number[i]>Max){
            Max = Number[i];
            M_line = i;
        }
    }

    cout << Max <<endl;
    cout << M_line+1 <<'\n';

    return 0;
}