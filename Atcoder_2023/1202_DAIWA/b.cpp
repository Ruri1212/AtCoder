#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    int N;
    int S,M,L;
    int DP[109][10009];

    int J[4] = {0,6,8,12};
    int Money[4];

    cin >> N;

    for (int i=1;i<=3;i++){
        cin >> Money[i] ;
    }
    DP[0][0] = 0;
    
    
    for (int j=1;j<=100;j++) {
        DP[0][j] = 100000000;
    }

    int sum;
    for (int i=1;i<=3;i++){        
        sum = 0;
        for (int j=0;j<=100;j++){                 
            if ( sum+J[i] == j) {
                DP[i][j] = min(DP[i-1][j],DP[i-1][j-J[i]]+Money[i]);
                DP[i][j] = min(DP[i][j],DP[i][j-J[i]]+Money[i]);
                sum = j;
            } 
            else if (DP[i-1][j-J[i]] != 100000000){
                DP[i][j] = min(DP[i-1][j],DP[i-1][j-J[i]]+Money[i]);
                // DP[i][j] = min(DP[i][j],DP[i][j-J[i]]+Money[i]);
            }
            else {
                DP[i][j] = DP[i-1][j];       
            }
        }
    }

    int ans = 100000000;
    for (int i = 1;i<=3;i++) {
        for (int j = N;j<=100;j++) {
            ans = min(ans,DP[i][j]);                
        }
    }
    
    cout << ans << endl;

    return 0;
}