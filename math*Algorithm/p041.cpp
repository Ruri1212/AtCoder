#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int N,T;

    int L[500009];
    int R[500009];

    cin >> T >> N;

    for (int i=1;i<= N;i++){
        cin >> L[i] >> R[i];
    }

    // 階差をとる
    int DI[500009]={};
    for (int i=1;i<=N;i++){
        DI[L[i]] += 1;
        DI[R[i]] -= 1;
    }

    // 累積和をとる
    int CS[500009];
    for (int i=0;i<T;i++) {
        if (i==0) CS[i]= DI[i];
        else CS[i] = CS[i-1] + DI[i];
        cout << CS[i] << endl;
    }

    return 0;
}