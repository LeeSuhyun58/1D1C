#include <iostream>
using namespace std;

int main(){
    int A, B, C, cnt=1;
    //A:고정비용, B:가변비용, C:책정된 노트북 가격
    long total, income; 

    cin >> A >> B >> C;

    if(B>=C){
        cout << -1;
        return 0;
    }

    total = A+(B*cnt);
    income = C*cnt;

    for(cnt = 2; total>income; cnt++){
        total = A+(B*cnt);
        income = C*cnt;
    }

    cout << cnt <<endl;
    /* cout << A/(C-B) + 1 <<endl;*/ 
    /* B와 C는 이윤을 둘 수 있는 부분
    실제 노트북 가격은 B이지만 C값으로 팔아서 C-B = 이윤
    그 이윤으로 A를 나눔 -> 수입 = 총비용
    그러므로 손익분기점은 나눈 몫에 + 1 */
 }