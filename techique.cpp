#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main() {   



    // ------------------------ 構造関係 ---------------------------

    // 典型問題p_003 グラフ問題
    // 1つの要素しか持たない場合は，vector<int> G[a]とする
    int a,b,pos;
    a = b = pos = 1;
    vector<int> G[a];
    G[a].push_back(b);
    for (int to : G[pos]){
    }

    // こうすることで，複数の要素を持つことができる
    using Graph = vector<vector<int>>;
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        // 無向グラフの場合は以下を追加
        // G[b].push_back(a);
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

    // 2024_0323    c++のset
    #include<bits/stdc++.h>
    // python のsetと使い方は同じ
    set<long long> a;
    int tmp = 1;
    a.insert(tmp);




    // ------------------------ 文字列関係 ---------------------------

    // 2024_02_24 d問題
    // " a "strig型，' a 'はchar型
    string s = "abcdefghijklmnopqrstuvwxyz";
    // for文の回し方
    for (auto &&c : s) {}
    for (char &c: s) {}


    //2024_0302 c問題
    // 文字列の回文をcppで判定
    int n=1;
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t; 

    //typical_006 問題
    // アルファベットを数字に変換する方法
    // int(S[i]-'a)で数値に置き換わる3

    // 文字列を数字に変換する場合，アルファベットであれば'a'を引くことで，アルファベットの対応数字に
    // 数字のchar型をint型に変換する場合には，'0'を引くことで,int型へ変換できる．
    string S;
    cin >> S;
    for(int i=0;i<=int(S.size())-1;i++)   {
        for(int j=0;j<26;j++){
            if(int(S[i]-'a')==j){
                cout << j;
            }
        }
    }

    return 0;
}