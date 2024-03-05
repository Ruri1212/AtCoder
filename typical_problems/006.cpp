#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)


// 回答を見てもよくわからず，とりあえず飛ばす



// アルファベットを数字にかえ，minを使う
// aaaa... から初めて，全ての文字が含まれるか判定する

int main() {   

    int n,k;
    string S;
    string alphabet;
    alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> n >> k;
    cin >> S;

    // 文字列をアルファベットの数字に並び替える
    int S_num[n];
    int tmp;
    int j;
    j = 0;

    for (auto  ch : S) {
        for (int i=0;i<=26;i++) {
            if (ch == alphabet[i]){
                tmp = i;
            }
        }
        S_num[j] = tmp;
        j++;
    }

    for (int i=1;i<=){


    }


    return 0;
}