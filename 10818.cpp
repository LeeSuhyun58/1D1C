#include <iostream>

using namespace std;

int main(){
    int n, i, Max, Min;

    cin >> n;
    int N[n];
    
    for(i=0; i<n; i++){
        cin >> N[i];
    }

    Min = N[0];
    Max = N[0];

    for(i=0; i<n; i++){

        if(N[i]<Min){
            Min = N[i];
        }

        if(N[i]>Max){
            Max = N[i];
        }
    }

    cout << Min << " " << Max;

    return 0;
}