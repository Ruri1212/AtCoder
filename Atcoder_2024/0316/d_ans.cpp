#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

#define MAX_N 7
#define MAX_H 10
#define MAX_W 10

int n,h,w;
int a[MAX_N];
int b[MAX_N];
int c[MAX_H][MAX_W];
bool ans;

void solve(int unused,int curi,int curj){

	bool can;
    //初期で呼び出された場合は，全て-1で初期化されているため意味なし
    //再帰で呼び出された場合にループに入る
    //2回目以降の場合では，置かれていないマスの一番左上の座標になる
    //全てのマスが埋まっているかの判定を行う
	while(c[curi][curj]>=0){
		curj++;
		if(curj>=w){
            curi++;
            curj=0;
        }
        //一番下に到達＝全てに置くことができた
		if(curi>=h){
            ans = true;
            return;
        }
	}


    //全てのタイルについて捜査
	rep(i,n){
        // i番目のタイルが置かれていないなら，if文に入る
        // 1が設置前の状態，0がすでに置いた状態
        // 再帰的に呼び出された場合もrepが全てのマスから始まるため，すでに置かれていないかの判定が必要
		if(unused&(1<<i)){

            // ------------------------------------------------------------------
		  	can=true;
            // タイルの大きさだけ各マスを操作
            // 置ける場合は，そのタイルの番号を設置
            // すでに置かれている場合，もしくは盤面を超える場合はfalse
			rep(ii,a[i]){
				rep(jj,b[i]){
					if(((curi+ii)<h)&&((curj+jj)<w)){
						if(c[curi+ii][curj+jj]<0)c[curi+ii][curj+jj]=i;
						else {can=false;}
					}
					else  {can=false;}
				}
			}

            // もし置けた場合は，^(排他的論理和)をとる
            // 初めは全て1が立っている状態=初期の関数呼び出しが((1>>n)-1)
            //　この排他的論理和の演算は置いたタイルを0にするためのもの
			if(can)solve(unused^(1<<i),curi,curj);

            //もし置けなかった場合に，途中まで置いた部分を元に戻す
            //途中で，can=falseになった場合にそれまでにiとした部分を初期に戻す            
			rep(ii,a[i]){
				rep(jj,b[i]){
					if(((curi+ii)<h)&&((curj+jj)<w)){
						if(c[curi+ii][curj+jj]==i)c[curi+ii][curj+jj]=-1;
					}
				}
			}
            // ------------------------------------------------------------------

            //長方形の場合，縦と横を逆にして試す
			if(a[i]!=b[i]){
				can=true;
				rep(ii,b[i]){
					rep(jj,a[i]){
						if(((curi+ii)<h)&&((curj+jj)<w)){
							if(c[curi+ii][curj+jj]<0)c[curi+ii][curj+jj]=i;
							else can=false;
						}
						else can=false;
					}
				}

                //以降は上記と同様                
				if(can)solve(unused^(1<<i),curi,curj);

				rep(ii,b[i]){
					rep(jj,a[i]){
						if(((curi+ii)<h)&&((curj+jj)<w)){
							if(c[curi+ii][curj+jj]==i)c[curi+ii][curj+jj]=-1;
						}
					}
				}

			}

		}
	}
	return;
}

int main(void){
	cin>>n>>h>>w;
	rep(i,n)cin>>a[i]>>b[i];
	rep(i,h)rep(j,w)c[i][j]=-1;
	ans=false;
    // 1<<n-1 = 2^n-1
	solve((1<<n)-1,0,0);
	if(ans)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
