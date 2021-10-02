#include <iostream>
using namespace std;

int main(){
    int X, i=1;
    cin >> X;

    while(X > i){
        X -= i;
        i++;
    }

    if(i%2 == 0){
        cout << X << "/" << i+1-X << endl;
    }
    else{
        cout << i+1-X << "/" << X << endl; 
    }
}