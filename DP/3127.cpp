#include <bits/stdc++.h>
using namespace std;

const int MXN = 501;
int V[2][MXN][MXN];
bool G[MXN][MXN];

int calc(int z, int x0, int y0, int x1, int y1){
  int ans=0;
  if(x1>=0 && y1>=0)ans+=V[z][x1][y1];
  if(x0>=1 && y1>=0)ans-=V[z][x0-1][y1];
  if(x1>=0 && y0>=1)ans-=V[z][x1][y0-1];
  if(y0>=1 && x0>=1)ans+=V[z][x0-1][y0-1];
  return ans;
}

int main(){
  ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
  int h, w; cin >> h >> w;
  for(int x=0; x<h; x++)
    for(int y=0; y<w; y++){
      char c; cin >> c;
      G[x][y]=c=='.';      
    }
  for(int x=0; x<h; x++)
    for(int y=0; y<w; y++){
      if(y+1<w && G[x][y] && G[x][y+1])
        V[0][x][y]=1;
      if(x+1<h && G[x][y] && G[x+1][y])
        V[1][x][y]=1;
    }

  for(int z=0; z<2; z++){
    for(int x=0; x<h; x++)
      for(int y=0; y<w; y++){
        int a=0, b=0, c=0;
        if(x)a=V[z][x-1][y];
        if(y)b=V[z][x][y-1];
        if(x&&y)c=V[z][x-1][y-1];
        V[z][x][y]+=a+b-c; 
      }
  }

  int Q; cin >> Q;
  for(int q=0; q<Q; q++){
    int xs[2], ys[2];
    for(int i=0; i<2; i++)cin >>xs[i]>>ys[i],xs[i]--,ys[i]--;
    cout << calc(0,xs[0],ys[0],xs[1],ys[1]-1) + calc(1,xs[0],ys[0],xs[1]-1,ys[1]) << "\n";
  }
}