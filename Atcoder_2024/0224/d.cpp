#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() { 
    int N;
    cin >> N;
    int A[N];
    for (int i = 1; i<=N; i++){
        cin >> A[i];
    }

    //平方の判定方法
    vector<int> D(N);
    int M;
    M = 1e6+1;
    for (int i = 1000; i<=M;i++ ){
        for (int k = i*i; k<=M ;k+=i*i) {

        }
    }

    for (int i=0 ; i<= sqrt(A[i]); i++) {
        if ()
        D[i].push_back();
    }



    return 0;
}