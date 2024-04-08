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


#define MAX_N 300
#define MAX_H 200
#define MAX_W 200

int n,h,w;
int cell[MAX_H][MAX_W];
bool ans;

int target_x,target_y;

int kusuri[MAX_H][MAX_W];




void solve(int x,int y, int en) {

    // energyの補給をするかどうか
    if (kussuri[x][y] > en) {
        en = kusuri[x][y];
    }

    // energy切れの場合
    if (en==0) {
        ans = False;
        return;
    }
    // ゴールに到達した場合
    if (x==target_x && y==target_y) {
        ans = True;
        return;
    }

    // 進む方向の決定
    int direct_x = 0;
    int direct_y = 0;


    // まずは横に進むかどうか
    if (x < target_x) {
        direct_x = 1;
    } else if (x > target_x) {
        direct_x = -1;
    }
    // 進む方向に壁or端があるかどうか
    if (cell[x+direct_x][y] != 2 && cell[x+direct_x][y] != MAX_H) {
        solve(x+direct_x,y,en-1);
    }
    else{
        // 次に縦に進むかどうか
        if (y < target_y) {
            direct_y = 1;
        } else if (y > target_y) {
            direct_y = -1;
        }
        // 進む方向に壁or端があるかどうか
        if (cell[x][y+direct_y] != 2 && cell[x][y+direct_y] != MAX_W) {
            solve(x,y+direct_y,en-1);
        }
    }


    // 進む方向に壁があるかどうか
    if (cell[x+direct_x][y+direct_y] == 2) {
        // 進む方向に壁がある場合
        if (cell[x+1][y] == 2 && cell[x][y+1] == 2) {
            // 進む方向に壁がある場合，進むことができない
            ans = False;
            return;
        } else if (cell[x+1][y] == 2) {
            // 右に進む
            solve(x,y+1,en-1);
        } else if (cell[x][y+1] == 2) {
            // 下に進む
            solve(x+1,y,en-1);
        } else {
            // 右に進む
            solve(x,y+1,en-1);
            // 下に進む
            solve(x+1,y,en-1);
        }
    } else {
        // 進む方向に壁がない場合
        solve(x+direct_x,y+direct_y,en-1);
    }


    return;
}













int main() {   

    cin >> h >> w;
    char tmp;
    rep(i,h){
        rep(j,w){
            cin >> tmp;
            if (tmp=="S") cell[i][j] = 0;
            else if (tmp=="T") {
                cell[i][j] = 1;
                // ゴールの座標を記録
                target_y = i;
                target_x = j;
            }
            else if (tmp=="#") cell[i][j] = 2;
            else cell[i][j] = 3;
        }
    }

    cin >> n;
    int tmp_x,tmp_y;
    int energy;
    rep(i,n){
        cin >> tmp_x >> tmp_y>> energy;
        kusuri[tmp_x][tmp_y] = energy;
    }

    ans = False;
    solve(0,0,0);

    return 0;
}