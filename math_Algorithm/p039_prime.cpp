
//　階差と累積和を使う場合は，階差はDI，累積和はCSとする

#include <iostream>
#include <algorithm>
using namespace std;

int N,DI[100009];
int Q,L[100009],R[100009],X[100009];

int main() {   
  
    cin >> N >> Q;

    for (int i=1;i <= Q;i++) {
        cin >> L[i]>> R[i] >> X[i];
        DI[L[i]] += X[i];
        DI[R[i]+1] -= X[i];
    }    

    for(int j=2;j<=N;j++) {
        if (DI[j]>0) cout << "<";
        if (DI[j]==0) cout << "=";
        if (DI[j]<0) cout << ">";
    }

    return 0;
}