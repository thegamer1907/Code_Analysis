#include<bits/stdc++.h>
#define ll long long
#define M 100005
#define oo 1000000000
#define P 999911659
#define O_O(x) cout<<x<<'\n'
#define V_V(x) scanf("%d",&x)
#define S 19
using namespace std;
int n,m,k,ans;
double A[4];
int main(){
	int i,j,a,b;
	cin>>n>>m>>k>>a>>b;
	A[1]=n+1.0*(k+m*60)/3600;
	A[2]=(1.0*m+1.0*k/60)/5;
	A[3]=1.0*k/5;
	sort(A+1,A+4);
	for(i=1;i<=2;i++){
		if(a>=A[i]&&a<=A[i+1]&&b>=A[i]&&b<=A[i+1]){
			ans=1;
		}
	}
	if((a>=A[3]||a<=A[1])&&(b>=A[3]||b<=A[1]))ans=1;
	if(ans)puts("YES");
	else puts("NO");
}
