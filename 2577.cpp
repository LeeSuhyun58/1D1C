#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int A, B, C;
    int Number0=0;
    int Number1=0;
    int Number2=0;
    int Number3=0;
    int Number4=0;
    int Number5=0;
    int Number6=0;
    int Number7=0;
    int Number8=0;
    int Number9=0;

    cin >> A >> B >> C;
    int result = (A*B*C);

    string R = to_string(result);
    int N = R.length();
    int c[10]={};

   for(int i=0; i<N; i++){

       if(R[i]=='0'){
           Number0++;
           c[0] = Number0;
       }
       if(R[i]=='1'){
           Number1++;
           c[1] = Number1;
       }
       if(R[i]=='2'){
           Number2++;
           c[2] = Number2;
       }
       if(R[i]=='3'){
           Number3++;
           c[3] = Number3;
       }
       if(R[i]=='4'){
           Number4++;
           c[4] = Number4;
       }
       if(R[i]=='5'){
           Number5++;
           c[5] = Number5;
       }
       if(R[i]=='6'){
           Number6++;
           c[6] = Number6;
       }
       if(R[i]=='7'){
           Number7++;
           c[7] = Number7;
       }
       if(R[i]=='8'){
           Number8++;
           c[8] = Number8;
       }
       if(R[i]=='9'){
           Number9++;
           c[9] = Number9;
       }
   }

   for(int i=0; i<10; i++){
       cout << c[i] <<endl;
   }

}