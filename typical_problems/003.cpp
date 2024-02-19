#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

// 考えたこと
// 答えがN以下になるなら，2分探索か？　ただN以下になる保証なし
// N^2が10^9を超えるため，全探索はなし(各都市に対し全ルートを探索)

//　答え：グラフの木を用いて，BFSで解く

int N;
int A,B;
const int INF = 1<<29;


vector<int> graph[ 100009 ];
int dist[100009];

void getdist(int start){

    for(int i=1;i<=N;i++) dist[i] = INF;
    dist[start] = 0;


    queue<int> Q;
    Q.push(start);

    while( ! Q.empty() ) {
        int pos = Q.front(); Q.pop();
        for ( int to : graph[pos]) {
            if (dist[to] == INF){
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }
}


int main() {   
    cin >> N;
    for (int i =1;i<=N-1;i++) {
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    // 木の直径の端点を求める
    getdist(1);
    int max_num1 = -1;
    int max_dis1 = -1;
    for (int i=1;i<=N;i++) {
        if( max_dis1 < dist[i] ){
            max_dis1 = dist[i];
            max_num1 = i;
        }
    }
    
    // 同様に木の直径の端点を求める
    getdist(max_num1);
    int max_num2=-1;
    int max_dis2=-1;
    for (int i=1;i<=N;i++) {
        if(max_dis2 < dist[i]){
            max_dis2 = dist[i];
            max_num2 = i;
        }
    }

    cout <<  + max_dis2 + 1 << endl;
    return 0;
}