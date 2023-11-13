
//雪が降った区間に単純にX[i]を足しこむ
//最悪の場合，O(N^2)になるため，TLEになる

#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int N,Q;
    cin >> N >> Q;
    int L[100009],R[100009],X[100009];

    for (int i=1;i <= Q;i++) cin >> L[i]>> R[i] >> X[i];

    //積雪量を保存
    int B[100009];
    B[0]  = 0;
    for(int i=1;i<=N;i++) B[i] = 0;

    for(int i= 1;i<= Q;i++) {
        for (int j = L[i]; j<=R[i]; j++) {
            B[j] += X[i];
        }
    }

    for(int i=1;i<N;i++){
        if (B[i] == B[i+1]) cout << "=" ;
        if (B[i] > B[i+1]) cout << ">";
        if (B[i] < B[i+1]) cout << "<";
    }

    return 0;
}