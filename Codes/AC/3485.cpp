/*
Just Another Source code by -
 __        ______                               
 \ \      / /  _ \ _ __ __ _  __ _  ___  _ __   
  \ \ /\ / /| | | | '__/ _` |/ _` |/ _ \| '_ \  
   \ V  V / | |_| | | | (_| | (_| | (_) | | | | 
    \_/\_/  |____/|_|  \__,_|\__, |\___/|_| |_| 
                             |___/              
*/
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000003
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define all(v) (v).begin(),(v).end()
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define SL(x) scanf("%lld",&(x))
#define SL2(x) scanf("%lld%lld",&(x),&(y))
#define P(x) printf("%d\n",(x))
#define FF first
#define SS second
#define cbits(x) __builtin_popcount(x)
using namespace std;
//int dx[]={1,0,0,-1},dy[]={0,1,-1,0};
long long n;
int chk(long long mid){
	long long x = n, a = 0;
	while(x){
		a += min(mid, x);
		x -= min(mid, x);
		x -= (x/10ll);
	}
	x = n/2ll + n%2ll;
	if(a >= x)
		return 1;
	return 0;

}
int main(){
long long l, h, mid, k;
cin>>n;
l = 1, h = n;
while(l < h){
	mid = l + (h - l)/2ll;
	if(chk(mid)){
		h = mid;
	}
	else
		l = mid + 1;
}
cout<<h;

return 0;
}