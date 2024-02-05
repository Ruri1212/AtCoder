#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    int N,Q;
    char S[300009];
    int l[300009],r[300009];

    cin >> N >> Q;

    for (int i=1;i<= N;i++) cin >> S[i];

    for (int i =1; i<=Q;i++) cin >> l[i] >> r[i];

    int DI[300009];
    DI[1] = 0;
    for (int i=1;i<N;i++) {
        if (S[i]==S[i+1]){
            DI[i+1] = 1;
        }
    }

    int CS[300009];
    CS[1]=0;
    for (int i=2;i<=N;i++) {
        CS[i] = CS[i-1] + DI[i];
    }

    for (int i=1;i<= Q;i++) {
        cout << CS[r[i]] - CS[l[i]] << endl;
    }



    return 0;
}