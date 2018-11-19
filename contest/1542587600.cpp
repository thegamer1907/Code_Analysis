#include<bits/stdc++.h>
#define debug cout<<"aaa"<<endl
#define d(a) cout<<a<<endl
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define LL long long
#define lson l,mid,root<<1
#define rson mid+1,r,root<<1|1
#define MIN_INT (-2147483647-1)
#define MAX_INT 2147483647
#define MAX_LL 9223372036854775807i64
#define MIN_LL (-9223372036854775807i64-1)
using namespace std;

const int N = 100000 + 5;
const int mod = 1000000000 + 7;
const double eps = 1e-8;

int main(){
	int ans1,ans2;
	double x,y,a,b,c;
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	t1%=12,t2%=12;
	x=t1*30.0,y=t2*30.0;
	h%=12;
	a=s*6.0,b=m*6.0+s/10.0,c=h*30.0+m/10.0+s/360.0;
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(x>=a&&x<b){
		ans1=1;
	}
	else if(x>=b&&x<c){
		ans1=2;
	}
	else{
		ans1=3;
	}
	if(y>=a&&y<b){
		ans2=1;
	}
	else if(y>=b&&y<c){
		ans2=2;
	}
	else{
		ans2=3;
	}
	if(ans1==ans2){
		puts("YES");
	}
	else{
		puts("NO");
	}
	return 0;
}
