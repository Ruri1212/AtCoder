#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
const int INF = 2000000000;
#define rep(i,n) for (int i=0; i< n;i++)




int main() {   
   
   int dp[105][105];

   for (int i=0;i<=100;i++){
    for (int j=0;j<=100;j++){
        dp[i][j] = 1e9;
    }
   }
    dp[0][0] = 0;

    string t;
    cin >> t;
    int tl = t.size();

    int n;
    cin >> n;

    for (int i=0;i<=n;i++){
        for (int j=0;j<=100;j++){
            dp[i+1][j] = dp[i][j];
        }
        int a;
        cin >> a;
        while(a>0){
            a--;
            string s;
            cin >> s;
            int sl = s.size();
            for (int j=0;j+sl<=tl;j++){
                bool ok = true;
                for (int k=0;k<sl;k++){
                    if(t[j+k] != s[k]){
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    dp[i+1][j+sl] = min(dp[i+1][j+sl],dp[i][j]+1);            
                }
            }            
        }
    }


    
    if(dp[n][tl]>5e8){dp[n][tl]=-1;}
    cout << dp[n][tl] << "\n";
    

    return 0;
}