#include<iostream>
using namespace std;

long long N,A,B;

long long GCD(long long A,long long B){
    while (A >= 1 && B >= 1){
        if(A>B) A = A % B;
        else B = B % A;
    }
    if (A >= 1 ) return A;
    return B;
}
int main() {
    cin >> N >> A >> B;
    cout << GCD(A,B);
    return 0;
}