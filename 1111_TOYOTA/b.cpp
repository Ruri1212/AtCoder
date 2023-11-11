#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int N;
    int D[109];

    cin >> N;
    for (int i=1;i<=N;i++) cin >> D[i];

    int ans =0;
    for (int i=1;i<100;i++) {
      
        if (i >= 10) {
          if (i % 10 == int( (i/10 ) %10) ){
            if (D[i] >= (i%10) ) ans += 1;
            if (D[i] >= i) ans += 1;
          }
        }
        else {
          if (D[i] >= i ) ans += 1;
          if (D[i] >= int(10*i+i)) ans += 1;
        }
        
    }
    
    cout << ans << endl;

    return 0;
}