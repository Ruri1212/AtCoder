#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    long long A,M,L,R;

    cin >> A >> M >> L >> R;

    long long limit = 1000000000000000000;

    long long answer = 0;
    
    long long l_s,l_r,r_s,r_r;

    l_s = (L/M);
    l_r = (L%M);
    r_s = (R/M);
    r_r = (R%R);

    if (L<=0 && R<=0) {
        l_s = l_s - r_s;
        
    }
    
    
    // for (long long i= L;i <R;i += M ){
    //     if (L <= i && i <= R){
    //         answer += 1;
    //     }

    // }

    cout << answer << endl;

    // long long length,shou;

    // length = R-L;
    // shou = int(length/M);

    // if (L <= A && A <= R) {
    //     shou += 1;
    // }

    // cout << shou << endl;
    

    return 0;
}