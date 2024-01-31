#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() { 
    int N,L,R;
    int A[200009];
    cin >> N >> L >> R;

    for (int i=1;i<=N;i++) cin >> A[i];

    for (int i=1;i<=N;i++)   {
        if (A[i]<=L) cout << L << " ";
        else if (A[i] > L && A[i] < R) cout << A[i] << " ";
        else if (A[i] >= R) cout << R << " ";
    }

    return 0;
}