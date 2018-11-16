#include <bits/stdc++.h>
#define ll long long
#define usd unsigned
#define IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(ii,a,b) for(int ii=a;ii<=b;++ii)
#define per(ii,a,b) for(int ii=b;ii>=a;--ii)
#define show(x) cout<<#x<<"="<<x<<endl
#define show2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define show3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define show4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define showa(a,b) cout<<#a<<'['<<b<<"]="<<a[b]<<endl
#define pii pair<int,int>
using namespace std;
const int maxn=2e5+10;
const int maxm=2e6+10;
const int INF=0x3f3f3f3f;
const int mod=1e9+7;
//head
int casn,n,m,k;
int num[maxn];

int main(){
//#define test
#ifdef test
	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	long long _begin_time=clock();
#endif
	IO;
	cin>>n;
	int num[maxn];
	rep(i,1,n){
		cin>>num[i];
	}
	int mn=0,ans=0,tmp=0;
	rep(i,1,n){
		ans+=num[i];
		tmp+=num[i]==1? 1:-1;
		if(tmp>0){
			tmp=0;
		}else {
			if(tmp<mn){
				mn=tmp;
			}
		}
	}
	if(mn==0){
		cout<<ans-1;
	}else {
		cout<<ans-mn;
	}


#ifdef test
	long long _end_time=clock();
	cerr<<"time= "<<_end_time-_begin_time<<" ms\n";
	fclose(stdin);fclose(stdout);system("out.txt");
#endif
  return 0;
}


