#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int N,M;
    string S,T,ans;
    cin >> N >> M;
    M = min(N,5);
    cin >> S;
    cin >> T;

    for (auto &c : S){
        ans += c;
        if(ans.size() == M && ans.substr(ans.size())=="ABC") {
            ans.erase(ans.size());
        }        
    }

    cout << ans << endl;

    return 0;
}