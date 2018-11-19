#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <set>
using namespace std;
const int mod=998244353;
const int INF=2147483647;
int a[100005][5];
bool b[16];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) for(int j=0;j<k;j++){
		scanf("%d",&a[i][j]);
	}
	for(int i=0;i<k;i++){
		bool f1=0,f2=0,f3=0;
		for(int j=0;j<n;j++){
			if(a[j][i]==1){
				bool ok=1;
				for(int _=0;_<k;_++) if(_!=i){
					if(a[j][_]==1) ok=0;
				}
				if(ok) f1=1;
			}
			else{
				f2=1;
				bool ok=1;
				for(int _=0;_<k;_++) if(a[j][_]==1) ok=0;
				if(ok) f3=1;
			}
		}
		if(f3) return 0*puts("YES"); 
		if(f2){
			if(f1) return 0*puts("YES");
		}
		else return 0*puts("NO");
	}
	if(k<4) return 0*puts("NO");
	for(int i=0;i<n;i++){
		int x=0;
		for(int j=0;j<k;j++){
			x<<=1;
			x|=a[i][j];
		}
		b[x]=1;
	}
	if(b[0]) return 0*puts("YES");
	if(b[3] && b[12]) return 0*puts("YES");
	if(b[5] && b[10]) return 0*puts("YES");
	if(b[9] && b[6]) return 0*puts("YES");
	puts("NO");
	return 0;
}