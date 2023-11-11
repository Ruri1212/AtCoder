
// 初期化のタイミングで結果が変わることがある

#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {

    int N,Q;
    cin >> N >> Q;

    int A[100000];
    int L[1000000],R[100000];
    
    A[0] = L[0] = R[0] = 0;

    for (int i=1; i<= N ;i++) cin >> A[i];
    for (int i=1; i <=Q ;i++) cin >> L[i] >> R[i];

    int B[100000];
    B[0] =0;
    for(int i=1;i<=N;i++) B[i] = B[i-1] + A[i];

    for (int i=1;i<=Q;i++) cout << B[R[i]] - B[L[i]-1] << endl;
    

    return 0;
}