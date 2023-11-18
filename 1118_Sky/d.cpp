#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    int N,M;
    int A[200009];
    int C[200009];
    cin >> N >> M;

    for (int j=1;j<=M;j++) cin >> A[j];
    for (int i=1;i<=N;i++){
        C[i] =0;
    }
    int dp[200009];
    dp[1] = A[1];
    C[A[1]] += 1;
    cout << dp[1] << endl;
    for (int j=2;j<=M;j++) {
        C[A[j]]+=1;

        if (C[dp[j]] < C[A[j]]){
            dp[j] = A[j];
        }
        else dp[j] = dp[j-1];
        cout << C[dp[j]] << endl;
        cout << C[A[j]] << endl;

        cout << dp[j] << endl;

        for (int i=1;i<=N;i++) cout << C[i] << " ";
        cout << endl;        

    }

    return 0;
}