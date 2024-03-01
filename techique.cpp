#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main() {   

    // 典型問題p_003 グラフ問題
    int a,b,pos;
    a = b = pos = 1;
    vector<int> G[a];
    G[a].push_back(b);
    for (int to : G[pos]){
    }
    // queueの処理方法
    queue<int> Q;
    int start = 1;
    Q.push(start);
    int pos = Q.front();Q.pop();
    while ( !Q.empty() ){   
    }

    // 典型問題p_004  vectorの配列宣言の前処理
    int H,W;
    H = W = 10;
    int A[H][W];
    vector<int> yoko(H, 0);  // i 行目の総和
    vector<int> tate(W, 0);  // j 列目の総和
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            yoko[i] += A[i][j];
            tate[j] += A[i][j];
        }
    }


    // 2024_02_24 d問題
    // " a "strig型，' a 'はchar型
    string s = "abcdefghijklmnopqrstuvwxyz";
    // for文の回し方
    for (auto &&c : s){}
    for (char &c: s) {}




    return 0;
}