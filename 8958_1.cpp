#include <iostream>
#include <string>
using namespace std;

int main(){
    int Case;
    string OX;

    cin >> Case;
    int result[Case]={};

    for(int i=0; i<Case; i++){
        int sum = 0;
        int cnt = 0;
        cin >> OX;

        int length = OX.length();

        if(length>0 && length<80){
            for(int k=0; k<length; k++){
                if(OX[k] == 'O'){
                    cnt++;
                    sum += cnt;
                }
                else{
                    cnt = 0;
                }

            } 
        }
        result[i] = sum;
        OX.clear();
    }

    for(int j =0; j<Case; j++){
        cout << result[j] << endl;
    }
}