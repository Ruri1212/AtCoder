#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

#include<bits/stdc++.h>

using namespace std;
const int INF = 2000000000;
using ll = long long;

#define rep(i,n) for (int i=0; i< n;i++)



int main() {   
    string s;
    int n;

    set<string> st;

    for (int i=0;i<s.size();i++) {
        for (int j=1;i+j<=s.size();j++){
            st.insert(s.substr(i,j));
        }
    }

    cout << st.size() << endl;
    return 0;
}