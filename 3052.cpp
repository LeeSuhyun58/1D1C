#include <iostream>
using namespace std;

//10개의 음이 아닌 정수를 입력 받음
//입력 받은 정수를 42로 나눔
//서로 다른 나머지의 개수 출력(42로 나눈 후 나머지 중)
int main(){
    int i, k, N, result = 0;
    int number[10];

    for(i=0; i<10; i++){
        cin >> N;
        number[i] = N % 42;
    }

    for(i=0; i<10; i++){
         int cnt1 = 0;
        for(k=i+1; k<10; k++){
            if(number[i] == number[k]){
                cnt1++;
            }
        }
         if(cnt1==0){
            result++;
        }
    }

    cout << result << endl;
}