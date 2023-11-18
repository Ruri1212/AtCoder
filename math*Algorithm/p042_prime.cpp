
// エラトステネスのふるいを頑張って用いる方法を考える

#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int N;
    long long ans;
    ans = 0;
    cin >> N;

    int EH[10000009];
    for (int i=1;i<=N;i++) EH[i] =0;
    for (int i=1;i<=N;i++) {
        for (int j=i;j<=N;j+=i){
            EH[j] = EH[j] + 1;
        }
    }
    for (int i=1;i<=N;i++) {
        ans += i*EH[i];
    }
    cout << ans << endl;
    return 0;
}