#include <stdio.h>

int main(){
    /*배열과 포인터의 문자열 저장 위치
    (베열의 경우 힙영역/ 포인터의 경우 정적 영역)*/
    char a[] = "Software security";
    char *p = a;
    p[0] = 'S';

    for(int i=0; i<sizeof(a); i++){
        printf("%c", a[i]);
    }
}