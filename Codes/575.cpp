#include<bits/stdc++.h>
#define rep(i,j,k) for(int i=(j);i<(k);i++)
#define mp make_pair
#define sz(a) (int)(a).size()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef long double ld;
typedef pair<double,double> pdd;
//----head----
vector<int> V;
bool isok(int a)
{
	int ans=0;
	while(a)ans+=a%10,a/=10;
	return ans==10;
}
int main()
{
	rep(i,1,11000000)if(isok(i))V.pb(i);
	int n;
	scanf("%d",&n);
	printf("%d\n",V[n-1]);
	return 0;
} 
