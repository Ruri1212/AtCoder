#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i< n;i++)

int main() {

  int ax,ay,ar;
  int bx,by,br;
  cin >> ax >> ay >> ar;
  cin >> bx >> by >> br;
  
  //ベクトル BA
  long long abx,aby,ablen;
  abx = ax - bx;
  aby = ay - by;
  
  // ベクトル BAの長さ
  ablen = sqrt(abx*abx + aby*aby);
  
  long long lo;
  int pattern = 1;
  
  if ( ar >= br) {
    lo = ar;
    if (lo > ablen)  
  }

  return 0;
}