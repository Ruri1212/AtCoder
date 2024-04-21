#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



def find(int i , vector<vector<int>> cluster){
    while( i != cluster[i]){

    }
}


int main() {   
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n);

    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--; 
        y--; 
        if (x>y){
            a[x].push_back(y);
        }
        else{
            a[y].push_back(x);
        }
    }

    int ans = 0;



    for (int i = 0; i < n; i++) {
        while (i != a[i]) {
            i = a[i];
        }
    }

    return 0;
}
