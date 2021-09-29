#include <stdio.h>

int main(){
    //수열 1, 3, 9, 27, 81, ...
    int AN = 1;
    int sum = 0;
    int R = 3;

    while(1){
        if(AN > 1000){
            AN = AN * R;
            sum += AN;
            break;
        }

        AN = AN * R;
        sum += AN;
    }
    printf("%d", sum);

    return 0;
}