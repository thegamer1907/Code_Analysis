#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define big 1e18
#define mod 1000000007
using namespace std;




int main()

{

ios_base::sync_with_stdio(false);
cin.tie(NULL);



{

 ll n,l;
 cin>>n>>l;
 ld A[n]={0};
 for(ll i=0; i<n; i++){
    cin>>A[i];
 }
 sort(A,A+n);
 ld mi=0;
 for(ll i=1; i<(n); i++){
  ld d=(A[i]-A[i-1]);
  if(d>mi)mi=d;
 }

 ld f=mi;
 f/=(2.0);
 if(f<(A[0]))f=A[0];
 if(f<(l-A[n-1]))f=(l-A[n-1]);
 cout<<setprecision(9)<<fixed<<f<<endl;


}


return 0;

}
