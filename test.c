#include <stdio.h>

int main(){
   int A = 1, B = 1, C = A + B;
   int sum = C, cnt = 2;

   while(cnt < 100){
       C = A + B;
       sum += C;
       A = B;
       B = C;
       cnt++;

       //if(cnt >= 100) break;
   }

   printf("%d", sum);

    return 0;
}