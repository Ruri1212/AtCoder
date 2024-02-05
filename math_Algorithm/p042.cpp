
//約数を一つずつ求めた．TLEになる

#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    int N;
    cin >> N;

    int f[10000009] = {};

    for (int i=1;i<=N;i++) {
        for (int j=1; j*j <= i;j++){
            if (i == j*j) f[i] += 1;
            else if (i%j==0) f[i] += 2;
        }
    }

    long long ans;
    ans = 0;
    for (int i=1;i<=N;i++) {
        ans += i*f[i];
    }

    cout << ans << endl;

    return 0;
}