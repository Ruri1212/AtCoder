#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)


bool isOK(string s) {
    int dep = 0;
    for (int i=0;i<s.size();i++){
        if(s[i] == '(') dep += 1;
        else dep -= 1;
        if (dep<0) return false;
    }
    if (dep == 0) return true;
    else return false;
}


int main() {   
    int N;

    cin >> N;

    if (N%2!=0) cout << endl;
    else{
        for (int i=0;i<=(1<<N);i++) {
            // format(i,"02b") , type(str)
            string Candidate = "";
            for(int j = N-1;j>=0;j--) {
                if ( ( i & (1<<j)) == 0){
                    Candidate +="(";
                }
                else Candidate += ")";
            }

            if (isOK(Candidate) == true) {
                cout << Candidate << endl;
            }
        }
    }

    return 0;
}