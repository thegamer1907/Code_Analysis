#include <bits/stdc++.h>
using namespace std;

#define sd(x) 		scanf("%d",&x)
#define su(x) 		scanf("%u",&x)
#define slld(x) 	scanf("%lld",&x)
#define sc(x) 		scanf("%c",&x)
#define ss(x) 		scanf("%s",x)
#define sf(x) 		scanf("%f",&x)
#define slf(x)		scanf("%lf",&x)
#define ll 			long long int
#define mod(x,n) 	(x+n)%n
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
ll Mod = 1000000007;


bool And(string a, string b){

	for(int i=0;i<a.length();i++){
		if((a[i]-'0') & (b[i]-'0')){
			return false;
		}
	}
	return true;
}

int main()
{
	// auther aniket bansal //
	// freopen("input_file_name.in","r",stdin);
	// freopen("output_file_name.out","w",stdout);

	ll i,j,k,l,m,n,x,y,z,r,t;
	// int i,j,k,l,m,n,x,y,z,a,b,r;

	cin>>n>>k;
	set<string> S;
	for(i=0;i<n;i++	){
		string s="";
		for(j=0;j<k;j++){
			string a;
			cin>>a;
			s=s+a;

		}

		S.insert(s);

	}
	string A[S.size()];
	set<string>::iterator iter;
	i=0;
	for(iter = S.begin();iter!=S.end();++iter){
		A[i]=*iter;
		i++;
	}

	for(j=0;j<S.size();j++){
		for(i=0;i<S.size();i++){
			if(And(A[j],A[i])){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;

	





	



	return 0;

}