#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>


using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)
const int INF = 2000000000;

//　2分探索を用いる発想は合っているが，コードの実装が十分ではない


long long A[300009];
long long B[300009];
int N;
int Q;

// 自作コード
int min_score(int q){
    int left = 1;
    int right = N;
    int mid;

    long long left_score;
    long long right_score;
    while (right - left  != 1){
        
        left_score = abs(A[left] - q);
        right_score = abs(A[right] - q);

        mid = (left+right)/2;
        if (left_score <= right_score) {
            right = mid;
        }
        else left = mid;
    }
    
    left_score = abs(A[left] - q);
    right_score = abs(A[right] - q);

    return min(left_score,right_score);
}

int main() { 

    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];        
    }

    cin >> Q;
    for (int j=1;j<=Q;j++) {
        cin >> B[j];
    }

    //2部探索のためにソートする    
    // i=1からとしているため，(A+1,A+N+1)でソートする
    sort(A+1,A+N+1);

    for (int j=1;j<=Q;j++){
        // lower_boundはbinary_searchであり，B[j]よりも大きい値のインデックスを返す
        int pos = lower_bound(A+1,A+N+1,B[j]) - A;
        int diff1 = INF;
        int diff2 = INF;
        if (pos <= N) diff1 = abs(A[pos]-B[j]);
        if (pos >= 2) diff2 = abs(A[pos-1]-B[j]);
        cout << min(diff1,diff2) << endl;
    }

    return 0;
}