#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
const int INF = 2000000000;
#define rep(i,n) for (int i=0; i< n;i++)




int main() {   
    int n,k;
    cin >> n >> k;

    int color[200009];
    int value[200009];

    for (int i=1;i<=n;i++) {
        cin >> color[i] >> value[i];
    }

    vector<vector<int>> renzoku(1);

    int pre;
    pre = color[1];
    int tmp;
    tmp = 0;

    for (int i=2;i<=n;i++){
        if(pre == color[i]) {
            tmp += 1;
            pre = color[i];
            continue;
        }
        renzoku[0].push_back(tmp);

    }

    return 0;
}