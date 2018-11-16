#include <bits/stdc++.h>
using namespace std;

const int MXN = 501;
int V[2][MXN][MXN];
bool G[MXN][MXN];

inline int calc(int z, int x0, int y0, int x1, int y1){
  return V[z][x1][y1]-V[z][x0-1][y1]-V[z][x1][y0-1]+V[z][x0-1][y0-1];
}

int main(){
  ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
  int h, w; cin >> h >> w;
  for(int x=1; x<=h; x++)
    for(int y=1; y<=w; y++){
      char c; cin >> c;
      G[x][y]=c=='.';
      if(G[x][y] && G[x-1][y])V[1][x-1][y]=1;
      if(G[x][y] && G[x][y-1])V[0][x][y-1]=1;   
    }

  for(int z=0; z<2; z++)
    for(int x=1; x<=h; x++)
      for(int y=1; y<=w; y++)
        V[z][x][y]+=V[z][x-1][y]+V[z][x][y-1]-V[z][x-1][y-1]; 

  int Q; cin >> Q;
  for(int q=0; q<Q; q++){
    int xs[2], ys[2];
    for(int i=0; i<2; i++)cin >>xs[i]>>ys[i];
    cout << calc(0,xs[0],ys[0],xs[1],ys[1]-1) + calc(1,xs[0],ys[0],xs[1]-1,ys[1]) << "\n";
  }
}