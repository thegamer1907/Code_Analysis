#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define dbg(x) cout << " " << #x << " = " << x << "   "
#define ol cout << endl

int H, W;

char G[1003][1003];

int hr[1003][1003], hs[1003][1003], hS[1003][1003];
int vr[1003][1003], vs[1003][1003], vS[1003][1003];

void query(){

      int r1, c1, r2, c2;
      cin >> r1 >> c1 >> r2 >> c2;
      r1--;
      c1--;

      int ans = 0;

      if( c2 > c1 )
      {
            c2--;
            ans += hS[r2][c2] + hS[r1][c1] - hS[r1][c2] - hS[r2][c1];
            c2++;
      }
      if( r2 > r1 )
      {
            r2--;
            ans += vS[r2][c2] + vS[r1][c1] - vS[r1][c2] - vS[r2][c1];
            r2++;
      }
      cout << ans << endl;
}

void solve(){

      cin >> H >> W;

      for( int i = 1; i <= H; i++ )
      {
            string s;
            cin >> s;
            for( int j = 1; j <= W; j++ ) G[i][j] = s[j-1];
      }

      for( int i = 1; i <= H; i++ )
            for( int j = 1; j < W; j++ )
                  if( G[i][j] == '.' && G[i][j+1] == '.' ) hr[i][j] = 1;

//                              for( int i = 1; i <= H; i++ ) {for( int j = 1; j <= W; j++ ) cout << hr[i][j]; ol;}ol;ol;

      for( int i = 1; i <= H; i++ )
            for( int j = 1; j <= W; j++ )
                  hs[i][j] = hs[i][j-1] + hr[i][j];

//                              for( int i = 1; i <= H; i++ ) {for( int j = 1; j <= W; j++ ) cout << hs[i][j]; ol;}ol;ol;

      for( int i = 1; i <= H; i++ )
            for( int j = 1; j <= W; j++ )
                  hS[i][j] = hS[i-1][j] + hs[i][j];

//                              for( int i = 1; i <= H; i++ ) {for( int j = 1; j <= W; j++ ) cout << hS[i][j] << " "; ol;}ol;ol;


      for( int i = 1; i < H; i++ )
            for( int j = 1; j <= W; j++ )
                  if( G[i][j] == '.' && G[i+1][j] == '.' ) vr[i][j] = 1;


      for( int i = 1; i <= H; i++ )
            for( int j = 1; j <= W; j++ )
                  vs[i][j] = vs[i][j-1] + vr[i][j];

      for( int i = 1; i <= H; i++ )
            for( int j = 1; j <= W; j++ )
                  vS[i][j] = vS[i-1][j] + vs[i][j];

      int q;
      cin >> q;

      while( q-- ) query();
}

signed main(){

      solve();
      return 0;
}
