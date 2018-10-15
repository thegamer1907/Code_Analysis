/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , /*a[] = {1 , 2 , 5 , 7 , 11 , 28 }*///a[500000], ans ;
/*int Lower_Bound (int x ){
int s = 0 , e = n , mid = 0 ;
while (s < e){
 mid = s + (e - s + 1 )  / 2 ;
//cout << "s = "<<s <<" e = "<< e <<" mid = "<<mid << endl;
    if (x < a[mid]) e = mid - 1;
    else {if (mid < n) s = mid  ;else break;}
}
return s ;
}
int main()
{

    cin >> n;
   for (int i = 0 ; i < n ;i++){ cin >> a[i] ; }
    for (int j = 0 ; j < n / 2 ; j ++){
       sort (a  , a + n + 1  ) ;
     //  cout <<"z = "<< a[n-j-1] / 2 << endl;
       int id = Lower_Bound (a[n-j-1] / 2 );
       //cout <<"r = "<<a[n-j-1]<<" l = "<< a[id]<<endl;
        if ( id < n && a[id] != -1 && a[id] <= a[n-j-1] / 2 ){ans ++ ;a[id] = -1 ;}
    }
  //  for (int i = 0 ; i <n ;i++) cout << a[i] <<" ";cout << endl;
    cout << ans + (n - ans * 2)<< endl;
}*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[500001] ;
int main()
{
   int n , ans = 0 , n2 = 0;
   cin >> n;
   n2 = n  ;
   for (int i = 1 ; i <= n ;i++){ cin >> a[i] ; }
   sort (a + 1, a + n +1) ; 
    for (int i = n / 2 ; i >=1  ; i--){
    if (a[i]*2 <= a[n2] ){n2 -- ; ans++ ;}
   }
   cout << (n - ans * 2 ) + ans << endl;
}
