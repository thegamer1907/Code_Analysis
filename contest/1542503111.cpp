#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define ff            first
#define ss            second
#define mp            make_pair
#define pb            push_back
double arr[5];
double inicio,fin;
bool yes;

int main () {

//  freopen ( "in.txt", "r", stdin );
//  freopen ( "out.txt", "w", stdout );
  for(int i=0;i<5;i++){
    cin>>arr[i];
    if(i==3)inicio=arr[i];
    if(i==1 or i==2)arr[i]/=5.0;
    else if(i==4)fin=arr[i];
  }
  if ( arr[2] ){
    arr[0] += 0.1;
    arr[1] += 0.1;
  }
  sort(arr,arr+5);
//  for ( int i =0 ; i < 5; ++i )
//    cout << arr[i] << " \n"[i==4];

  if ( inicio > fin ) swap ( inicio, fin );
  for ( int i = 0; i < 4; ++i )
    if ( arr[i] == inicio and arr[i+1] == fin )
      yes = true;
  if ( arr[0] == inicio and arr[4] == fin )
    yes = true;
  cout << ( yes? "YES" : "NO" );

  return 0;

}
