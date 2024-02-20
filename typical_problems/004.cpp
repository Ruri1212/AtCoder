#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

// 考えたこと
//


int main() {   
    int H,W;

    int B[2001][2001];

    cin >> H >> W;

    for ( int i = 1;i<=H;i++) {
        for (int j = 1;j<=W;j++) {
            cin >> B[i][j];
        }
    }

    int sum_H[2009];
    int sum_W[2009];
    int tmp;

    for (int i =1;i<=H ;i++){
        tmp = 0;
        for (int j = 1;j<=W;j++){
            tmp  += B[i][j];
        }
        sum_W[i] = tmp;
    }

    for (int j=1;j<=W;j++){
        tmp = 0;
        for (int i=1;i<=H;i++){
            tmp += B[i][j];
        }
        sum_H[j] = tmp;
    }


    for (int i=1;i<=H;i++) {
        tmp = 0;
        for (int j=1;j<=W;j++){
            tmp = sum_W[i] + sum_H[j] - B[i][j];
            cout << tmp << " ";
        }
        cout << endl;
    }


    return 0;
}