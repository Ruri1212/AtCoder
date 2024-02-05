#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {   

    int N,Q;
    cin >> N >> Q;

    int coordinate[1000009][2];

    for (int i=1;i<=N;i++){
    coordinate[i][0]= i;
    coordinate[i][1]= 0;
    }
    
    int num = 0;
    char move;
    int part_num = 0;
    int tmp0,tmp1 = 0;
    for (int i=1;i<=Q;i++) {
        cin >> num;
        if (num == 1){
          for (int j = N;j>=2;j--) {
              coordinate[j][0] = coordinate[j-1][0];
              coordinate[j][1] = coordinate[j-1][1];
              
          }
            cin >> move;
            if (move == 'R') coordinate[1][0] += 1;
            else if (move == 'L') coordinate[1][0] -= 1;
            else if (move == 'U') coordinate[1][1] += 1;
            else if (move == 'D') coordinate[1][1] -= 1;
        }
        else if (num == 2){
            cin >> part_num;
            cout << coordinate[part_num][0] << " " <<coordinate[part_num][1] << endl;
        }
    }



    return 0;
}