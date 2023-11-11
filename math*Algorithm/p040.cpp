#include <iostream>
#include <algorithm>
using namespace std;


int main() {   

    int N,A[200009];
    int M,B[200009];

    cin >> N;
    //駅間の距離が階差
    A[1]=0;
    for (int i=2;i<=N;i++) cin >> A[i]; 

    cin >> M;
    for (int j=1;j<= M;j++) cin >> B[j];

    // Aを元に，累積和を計算する
    long long CS[200009];
    CS[1] =0;
    for (int i=2;i<=N;i++) CS[i] = CS[i-1] + A[i];

    long long ans;
    ans =0;
    int r,l;
    for (int j=1;j<M;j++) {
        l = min(B[j],B[j+1]);
        r = max(B[j],B[j+1]);
        ans += CS[r] - CS[l];
    }

    cout << ans << endl;
    
    return 0;
}