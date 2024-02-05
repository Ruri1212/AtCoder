
// dfsを扱う

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int N,M;
int A[100009],B[100009];
bool visited[100009];
vector<int> G[100009];

void dfs(int pos){
    visited[pos] = true;
    for ( int a : G[pos]) {
        if (visited[a]==false) {
            dfs(a);
        }
    }
}


int main() {       
    string ans;

    cin >> N >> M;
    for (int j=1;j<=M;j++){
        cin >> A[j] >> B[j];
        G[A[j]].push_back(B[j]);
        G[B[j]].push_back(A[j]);        
    }
    
    for (int i=1;i<=N;i++) visited[i] = false;

    dfs(1);

    ans = "The graph is connected.";
    for (int i=1;i<=N;i++){
        if (visited[i]==false) ans = "The graph is not connected.";
    }

    cout << ans << endl;

    return 0;
}
