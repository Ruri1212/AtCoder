
// スタックを使って管理するとO(N)で処理することが可能になる
// また，string.size()はintを返すが，string.end()はイテレータを返すため違いに注意

#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    string S,ans;

    cin >> S;

    for (auto &c : S){
        ans += c;
        if(ans.size() >= 3 && ans.substr(ans.size()-3)=="ABC") {
            ans.erase(ans.size()-3,ans.size());
        }        
    }
    cout << ans << endl;


    return 0;
}