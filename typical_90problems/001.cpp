#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

// int main() {   
//     int N, L;
//     int K;
//     int A[100009];
//     int kaisa[100009];


//     cin >> N >> L;
//     cin >> K;
//     A[0] = 0;
//     for (int i=1;i<=N;i++) cin >> A[i];    

//     int answer = -1;
//     int tmp = 1000000009;

//     for (int i=0;i<=N;i++){
//         if (K==1){
//             tmp = min(A[i],L-A[i]);
//             answer = max(answer,tmp);
//         }
//         else{
//             tmp = min(( A[(K-1)+i]-A[i] ),tmp);
//             answer = max(answer,tmp);
//         }
//     }

//     cout << answer << endl;

//     return 0;
// }

int N,L,K;
int A[100009];

bool isOK(int mid) {
    int pre = 0;
    int cnt = 0;
    for (int i=1;i<=N;i++) {
        if( (A[i]-pre) >= mid && (L-A[i]) >= mid){
            cnt++;
            pre = A[i];
        }
    }
    if (cnt >= K) return true;
    else return false;
}

int main() {

    cin >> N >> L;
    cin >> K;
    for (int i=1;i<=N;i++) cin >> A[i];


    int left = -1;
    int right = L+1;

    while(right - left > 1) {
        int mid = left + (right - left) / 2;
        if (isOK(mid) == true) left = mid;
        else right = mid;
    }

    cout << left << endl;

    return 0;

}