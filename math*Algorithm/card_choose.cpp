#include<iostream>
using namespace std;

long long N;
long long A[200000];
long long Answer;

int main() {
  cin >> N;
  int i;
  long long  cnt[100000];
  for (i = 0; i< N ; i++ ) cin >> A[i];
  
  for (i=0; i<100000;i++) cnt[i] = 0;
  for (i=0;i<N;i++) cnt[A[i]] += 1;
  
  for (i=0;i<=49999;i++){
    Answer += cnt[i] * cnt[10000-1];
  }
  Answer += cnt[50000] * (cnt[50000]-1)/2;
  cout << Answer << endl;
  return 0;
}