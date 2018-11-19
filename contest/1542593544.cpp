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

const int N = 100 + 5;
const int mod = 1000000000 + 7;
const double eps = 1e-8;

int main(){
	string a,b;
	string ans[N];
	cin>>a;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ans[i];
		if(ans[i]==a){
			puts("YES");
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b=ans[i]+ans[j];
			if(b[1]==a[0]&&b[2]==a[1]){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
