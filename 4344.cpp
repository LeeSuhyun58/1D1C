#include <iostream>
using namespace std;

/*테스트 케이스 입력 받기, 케이스 마다의 학생 수(N), N명의 점수 입력
각 케이스마다 평균이 넘는 학생들의 비율을 반올림하여  
소수점 셋째자리까지 출력
*/

int main(){
    int CaseN, studentN;
    double avg = 0.0;

    cin >> CaseN;
    double percent[CaseN];

    for(int i=0; i<CaseN; i++){
        int sum = 0;
        int cnt = 0;

        cin >> studentN;
        int score[studentN];

        for(int j=0; j<studentN; j++){
            cin >> score[j];
            sum += score[j];
        }
        avg = (double)sum /studentN;
       
        for (int k = 0; k <studentN; k++)
        {
            if(score[k]>avg){
                cnt++;
            }
        }
        percent[i] = (double)cnt/studentN * 100;
    }

    for(int i=0; i<CaseN; i++){
        cout << fixed;
        cout.precision(3);
        cout << percent[i] << "%"<< endl;
    }
}