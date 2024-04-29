#include<vector>

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i=0;i<n;i++){
        cin >> a[i];        
    }

    a.push_back();
    a.size();
    a[a.size()-1];
    a.pop_back();
}