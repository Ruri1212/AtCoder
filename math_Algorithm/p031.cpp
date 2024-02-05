#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {
  int n;
  cin >> n;
  
  int A[1000000];
  for (int i=1;i<=n;i++) cin >> A[i];
  
  long long dp[1000000];
  
  dp[0] = 0;
  
  for (int i=1; i <= n; i++){
    if(i==1) dp[i] = A[i];
    if(i==2) dp[i] = max(A[1],A[2]);
    if(i>=3) dp[i] = max(dp[i-2]+A[i],dp[i-1]);
  } 
  
  cout << dp[n] << endl;

  return 0;
}