#include <bits/stdc++.h>
using namespace std;

bool arr [ 100002 ][ 5 ];

int main () {
    int n, k ;
    cin >> n >> k ;
    for ( int i = 0 ; i < n ; i ++ ) {
      for ( int j = 0 ; j < k ; j ++ ) {
        cin >> arr[ i ][ j ] ;
        arr[i][j] = 1-arr[i][j];
      }
    }

    if(k == 1){

      for(int i = 0; i < n; i++){

          if(arr[i][0]){

            cout<<"YES";
            return 0;
          }
      }
      cout << "NO\n";
    }
    else if(k == 2){

      bool s = false;
      bool d = false;
      for(int i = 0; i < n; i++){

        if(arr[i][0] && arr[i][1]){

         cout<<"YES";
         return 0;
        }
        if(!arr[i][0] && arr[i][1]) s = true;

        if(arr[i][0] && !arr[i][1]) d = true;

        if(s && d){

          cout<<"YES";
          return 0;
        }
      }
      cout << "NO\n";
    }
    else if(k == 3){
      bool s = false ,d = false, f = false, x = false, jaja = false, ot = false ;
      bool ok = false ;
      for ( int i = 0 ; i < n ; i ++ ) {
        if ( (arr[i][0]) && (arr[i][1]) && (arr[i][2]) ) ok = true ;
        if ( (!arr[i][0]) && arr [i][1] && arr[i][2] ) s = true ;
        if ( arr[i][0] && (!arr[i][1]) && arr[i][2] ) d = true ;
        if ( arr [i][0] && arr[i][1] && (!arr[i][2]) ) f = true ;
        if ( arr [i][0] && !arr[i][1] && !arr[i][2] ) x = true ;
        if ( !arr [i][0] && !arr[i][1] && arr[i][2] ) jaja = true ;
        if ( !arr [i][0] && arr[i][1] && !arr[i][2] ) ot = true ;

        if ( (s&&d) || (s&&f) || (d&&f) || (ot&&d) || (jaja&&f) || (x&&s)) ok = true ;
      }
      if ( ok ) cout << "YES\n";
      else cout << "NO\n";
    }
    else {

      bool s = false, d = false, f = false, g = false, ok = false, var1 = false, var2= false, var3 = false, var4 = false, var5 = false, var6 = false, var7 = false, var8 = false, var9 = false, var10 =false;
      for ( int i = 0 ; i < n ; i ++ ) {
        if ( arr[i][0] && arr[i][1] && arr[i][2] && arr[i][3]) ok = true ;
        if ( !arr[i][0] && arr [i][1] && arr[i][2] && arr[i][3]) s = true ;//1
        if ( arr[i][0] && !arr[i][1] && arr[i][2] && arr[i][3]) d = true ;//2
        if ( arr [i][0] && arr[i][1] && !arr[i][2] && arr[i][3]) f = true ;//3
        if ( arr [i][0] && arr[i][1] && arr[i][2] && !arr[i][3]) g = true ;//4
        if ( !arr [i][0] && !arr[i][1] && arr[i][2] && arr[i][3]) var1 = true ;//1 2
        if ( !arr [i][0] && arr[i][1] && !arr[i][2] && arr[i][3]) var2 = true ;//1 3
        if ( !arr [i][0] && arr[i][1] && arr[i][2] && !arr[i][3]) var3 = true ;//1 4
        if ( arr [i][0] && !arr[i][1] && !arr[i][2] && arr[i][3]) var4 = true ;//2 3
        if ( arr [i][0] && !arr[i][1] && arr[i][2] && !arr[i][3]) var5 = true ;//2 4
        if ( arr [i][0] && arr[i][1] && !arr[i][2] && !arr[i][3]) var6 = true ;//3 4
        if ( !arr [i][0] && !arr[i][1] && !arr[i][2] && arr[i][3]) var10 = true ;//1 2 3
        if ( !arr [i][0] && arr[i][1] && !arr[i][2] && !arr[i][3]) var7 = true ;//1 3 4
        if ( !arr [i][0] && !arr[i][1] && arr[i][2] && !arr[i][3]) var8 = true ;//1 2 4
        if ( arr [i][0] && !arr[i][1] && !arr[i][2] && !arr[i][3]) var9 = true ;//2 3 4


        if ( (s&&d) || (s&&f) || (s&&g) || (d&&f) || (d&&g) || (var1&&(f||g)) || (var2&&(d||g)) || (var3&&(d||f)) || (var4&&(s||g)) || (var5&&(s||f)) || (var6&&(s||d)) || (f&&g) || (var1&&var6) || (var2&&var5) || (var3&&var4) || (var7&&d) || (var8&&f) || (var9&&s) ||(var10&&g)) ok = true ;
      }
      if ( ok ) cout << "YES\n";
      else cout << "NO\n";
    }

    return 0;
}