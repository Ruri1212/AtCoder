#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

const int INF = 2000000000;
#define rep(i,n) for (int i=0; i< n;i++)
#define MAX_N 300
#define MAX_H 200
#define MAX_W 200

int n,h,w;
int cell[MAX_H][MAX_W];
bool ans;

int target_x,target_y;
int start_x,start_y;

int kusuri[MAX_H][MAX_W];

int dp[MAX_H][MAX_W];


void solve(int x,int y, int en) {

    // 壁の場合
    if (cell[x][y] == 2) {
        dp[x][y] = -INF;
        return;
    }

    /// --------- 壁でない場合 ---------- ///

    // energyの補給をするかどうか
    if (kusuri[x][y] > en and en > 0) {
        en = kusuri[x][y];
        // dp[x][y] = en;
        // solve(x,y,en);
    }

    // 4方向を全て呼び出す
    int left = 0;
    int right = 0;
    int up = 0;
    int down = 0;
    left = min(0,x-1);
    right = max(w-1,x+1);
    up = min(0,y-1);
    down = max(h-1,y+1);

    if (dp[x][y] < en) {
        dp[x][y] = en;
        solve(left,y,en-1);
        solve(right,y,en-1);
        solve(x,up,en-1);
        solve(x,down,en-1);
        return;
    }
    return;
}


int main() {   

    cin >> h >> w;
    char tmp;
    rep(i,h){
        rep(j,w){
            cin >> tmp;
            if (tmp=='S') {
                cell[i][j] = 0;
                // スタートの座標を記録
                start_y = i;
                start_x = j;
            }
            else if (tmp=='T') {
                cell[i][j] = 1;
                // ゴールの座標を記録
                target_y = i;
                target_x = j;
            }
            else if (tmp=='#') cell[i][j] = 2;
            else cell[i][j] = 3;
        }
    }

    cin >> n;
    int tmp_x,tmp_y;
    int energy;

    rep(i,h){
        rep(j,w){
            kusuri[i][j] = 0;
            dp[i][j] = -INF;
        }
    }

    rep(i,n){
        cin >> tmp_x >> tmp_y>> energy;
        kusuri[tmp_x][tmp_y] = energy;
    }

    solve(start_x,start_y,0);
    if (dp[target_x][target_y] > 0) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    // solve(0,0,0);

    return 0;
}