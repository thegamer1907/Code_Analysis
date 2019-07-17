#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e5+10;
long long a[maxn];
long long n,m,k;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m>>k){
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		long long s=0;
		long long flag=0;
		long long cnt=0;
		long long x=0;
		long long y=k;
		while(s<m){
			flag=0;
			while(a[s]-x<=k&&s<m){
				s++;
				flag++;
			}
			x=s;
			if(flag>0){
				cnt++;
			}else if(flag==0){
				if((a[s]-x)%y==0)
					k=((a[s]-x)/y)*y;
				else
					k=((a[s]-x)/y+1)*y;
				//k+=y;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}