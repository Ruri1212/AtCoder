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
    N = 100;

    for (int i=1;i<=3;i++){
        cin >> Money[i] ;
    }
    DP[0][0] = 0;
    
    
    for (int j=1;j<=N;j++) {
        DP[0][j] = 100000000;
    }

    int sum;
    for (int i=1;i<=3;i++){        
        sum = 0;
        for (int j=0;j<=N;j++){
            if (j<J[i]) DP[i][j] = DP[i-1][j];            
            if ( sum+J[i] == j) {
                DP[i][j] = min(DP[i-1][j],DP[i-1][j-J[i]]+Money[i]);
                DP[i][j] = min(DP[i][j],DP[i][j-J[i]]+Money[i]);
                sum = j;
            }            
        }
    }

    int ans = 100000000;
    for (int i = 1;i<=3;i++) {
        for (int j = 1;j<=N;j++) {
            if (DP[i][N] != 0) ans = min(ans,DP[i][N]);                
        }
    }
    

    cout << ans << endl;
    
     
    for (int i=1;i<=3;i++) {
      for (int j=1;j<=N;j++) {
        cout << DP[i][j] << " ";
      }
      cout << endl;
    }
    

    return 0;
}