#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    bool rootPriv = false;
    char name[8];

    cin >> name;
    printf("My name is '%s\n'",name);
    printf("A I root? : %d\n", rootPriv);

    return 0;
}