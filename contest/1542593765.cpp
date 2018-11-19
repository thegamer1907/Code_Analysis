/*input

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifdef ONLINE_JUDGE
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	#endif
	long long n,q,m,k,h,ans=0,sum=0,p,x,y;
	string a,s[105],tmp;
	cin>>a>>n;
	for(int i=0;i<n;++i){
		cin>>tmp;
		s[i]=tmp;
		if(tmp==a) return cout<<"YES",0;
	}
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j){
				if(s[i][1]==a[0]&&s[j][0]==a[1])
					return cout<<"YES",0;
			}
	cout<<"NO";
}