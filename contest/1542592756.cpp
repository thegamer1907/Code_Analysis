// Template by [thunder_blade]
// IIIT ALLAHABAD
// includes :)

#include <bits/stdc++.h>
using namespace std;
#define TEST  int test_case; cin>>test_case; while(test_case--)
#define all(v) (v).begin(),(v).end()
#define fi  first
#define se  second
#define pb push_back
#define mp make_pair
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("%f\n",x)
#define ps(x) printf("%s\n",x)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pis(x) printf("%d ",x)
#define pls(x) printf("%lld ",x)
#define pfs(x) printf("%f ",x)
#define pss(x) printf("%s ",x)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define mod 1000000007

const int N = 500005;


int main(){
	
	string st;
	cin>>st;
	int n;
	cin>>n;
	string a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int f=0;
	for(int i=0;i<n;i++){
		if(f)break;
		if(a[i] == st){
			f=1;
			break;
		}
		if(a[i][1] == st[0]){
			for(int j = 0; j < n; j++){
				//if(j==i)continue;
				if(a[j][0] == st[1]){
					f=1;
					break;
				}
			}
		}
	}
	if(f)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}