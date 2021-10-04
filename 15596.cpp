#include <iostream>
#include <vector>
using namespace std;

/*ong long sum(vector<int> &a) {
	long long result = 0;
    
    for(int i = 0; i<a.size(); i++){
        ans += a[i];
    }
    
	return result;
}
*/

long long sum(vector<int> &a){
    long result = 0;
    int n, number=0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> number;
        a.push_back(number);
        result += a[i];
    }

    return result;
}

int main(){
    int v_sum = 0;
    vector<int> number;

    v_sum = sum(number);
    cout << v_sum << endl;

    return 0;
}