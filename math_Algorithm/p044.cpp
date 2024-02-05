
// bfsを扱う
//  グラフを扱う際には vector<int> G[N];を宣言するようにする

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   
    
    int N,M;
    int A[100009],B[100009];
    vector<int> G[100009];
    int P[100009];

    cin >> N >> M;

    for(int j=1;j<=M;j++){
        cin >> A[j] >> B[j];
        G[A[j]].push_back(B[j]);
        G[B[j]].push_back(A[j]);
    }

    //passを-1で初期化する
    for (int i=1;i<=N;i++){
        P[i] = -1;
    }

    queue<int> Q;
    P[1] = 0;
    Q.push(1);

    while(!Q.empty()){
        int fr = Q.front();
        Q.pop();
        // 未訪問
        for (int i: G[fr]) {
            if (P[i]==-1){
                P[i] = P[fr]+1;
                Q.push(i);
            }
        }
    }

    for (int i=1;i<=N;i++){
        cout << P[i] << endl;
    }
    return 0;
}