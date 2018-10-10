#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(a,b) for (int i = a ; i < b ; i++)
using namespace std ;
int  n;
int  res[100010] ;
int index;
bool ok ;
void s(int b){
    int r = n , l = 0 ;
    while (r>l){
        int mid = (r+l)/2;
        if (res[mid] == b ){
            index = mid+1;
            return;
        }
        if (res[mid]>b){
            r = mid;
            index = mid+1 ;
            ok = 1 ;
        }
        else
            l = mid+1 ;
    }

   // return false;
}

int main ()
{
    ios::sync_with_stdio(false) ;
    int d;
    cin >> n ;
    int a[n+1];
    for ( int i = 0 ; i < n ; i++ ){
        cin >> a[i] ;
        res[i]+=(a[i]+res[i-1]) ;
    }
    //int d ;
    cin >> d ;
    for ( int i = 0 ; i < d ;i++ ){
            ok = 0 ;
    int x ;
    cin >> x ;
    // sort(a,a+n);
     s(x);
        cout << index<<endl;
    }
       return 0;



}