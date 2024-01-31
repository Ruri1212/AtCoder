#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main() {  
    int H,W,K;
    cin >> H >> W >> K;

    int batu[200001];
    int ten[200001];

    string S[200001];

    for (int i = 1;i<=H;i++) cin >> S[i];
    for (int i = 1;i<=H;i++) S[i] = "#" + S[i];

    int ans = 1e9;
    for (int y = 1;y<=H;y++) {
        for (int i =1;i<=W;i++) {
            if (S[y][i] == 'x') batu[i] = batu[i-1] + 1;
            if (S[y][i] == '.') ten[i] = ten[i-1] + 1;
        }
        
    }



    // for(int i=1;i<=W;i++) {

    // }



    return 0;
}