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

int main() {   

    ll sx,sy;
    ll tx,ty;

    ll tate_move;
    ll yoko_move;

    cin >> sx >> sy;
    cin >> tx >> ty;

    if ((sx+sy) %2 ==1){
        --sx;
    }
    if ((tx+ty) %2 ==1){
        --tx;
    }

    tate_move = abs(ty-sy);
    yoko_move = abs(tx-sx);




    if(tate_move >= yoko_move){
        cout << tate_move << endl;
    }    
    else{ 
        cout << tate_move + ll( (yoko_move-tate_move) /2) << endl;
    }

    return 0;
}