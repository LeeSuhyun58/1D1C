#include <stdio.h>

int main() {
    char str[30] = "Num 4294967295";
    int i ;

    sscanf(str, "Num %u", &i);

    printf("Number from : '%s'\n", str);
    printf("Number : %u\n", i);

    return 0;
}