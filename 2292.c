#include <stdio.h>

int main(){
    int N, CNT = 0;
    scanf("%d", &N);

    for(int i = 2; i<=N; CNT++){
        i += 6 * CNT;
    }
    if(N == 1) CNT = 1;

    printf("%d", CNT);
}