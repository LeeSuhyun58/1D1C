#include <iostream>
using namespace std;

/*시험 본 과목의 수 N개(N<=1000)
성적 입력받음(배열)
(적어도 0보다 크고 100보다 작거나 같음)*/

int main(){
    int N;
    double result, avg = 0.0;

    cin >> N;
    double score[N];

    for(int i=0; i<N; i++){
        cin >> score[i];
    }

    int Max = score[0];

    for(int j=0; j<N; j++){
        if(Max < score[j]){
            Max = score[j];
        }
    }

    for(int k=0; k<N; k++){
        score[k] = (score[k]/Max)*100;
        result +=score[k];
    }

    avg = (double)result/N;
    cout << avg << endl;
}