#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    long long D;
    cin >> D;
    
    long long ans;
    long long min;
    long long x;
    long long y;
    

    ans = D;    
    min = D;

    for (x = 0;x*x <= D;x++) {
        ans = D - x*x;
        for (y = 0;y*y <= ans;y++)  {
            ans = ans - y*y;
            if (ans < min){
                min = ans;
            }
            ans = D- x*x;
        }            
    }    
    cout << min << endl;

    return 0;
}