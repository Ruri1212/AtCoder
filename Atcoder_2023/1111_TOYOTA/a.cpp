#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    int N,X;
    int S[700];
    cin >> N >> X;
    for(int i=1;i<=N;i++) cin >> S[i];

    int ans=0;
    for (int i=1;i<=N;i++){
        if (S[i] <= X) ans += S[i];
    }

    cout << ans << endl;
    return 0;
}