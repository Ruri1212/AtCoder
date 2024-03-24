#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
const int INF = 2000000000;
#define rep(i,n) for (int i=0; i< n;i++)




int main() {   
    int n;
    long long k;
    cin >> n >> k;

    set<long long> a;
    long long tmp;
    for (int i = 0;i<n;i++) {
        cin >> tmp;
        a.insert(tmp);
    }

    long long sum_k;
    sum_k = k*(k+1)/2;

    for( int x : a ) {
      if (x <= k) sum_k  = sum_k - x;
    }

    cout << sum_k << endl;

    return 0;
}