#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int n;
    cin >> n;
    vector<int> a;
    vector<ll> emp;

    rep(i,n) cin >> a[i];

    ll s;
    for (int i=0;i<n;i++){
        emp.push_back(a[i]);
        while (emp.size() >= 2 && emp[emp.size()-2] == emp[emp.size()-1]){
            s = emp[emp.size()-2] + emp[emp.size()-1];
            emp.pop_back();
            emp.pop_back();
            emp.push_back(s);
        }
    }

    cout << emp.size() << endl;

    return 0;
}