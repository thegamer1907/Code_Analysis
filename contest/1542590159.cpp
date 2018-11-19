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

int main()
{
	// auther aniket bansal //
	// freopen("input_file_name.in","r",stdin);
	// freopen("output_file_name.out","w",stdout);

	//ll i,j,k,l,m,n,x,y,z,a,b,r,t;
	int i,j,k,l,m=0,n,x,y,z,a,b,r,p=0;

	string s1;
	cin>>s1;
	cin>>n;
	string A[n];
	for(i=0;i<n;i++){
		cin>>A[i];
		if(A[i]==s1){
			p++;
		}
	}
	if(p!=0){
		cout<<"YES"<<endl;
	}
	else{
		for(j=0;j<n;j++){
			
			for(i=0;i<n;i++){
				string s="";
				s =s+ A[j][1];
				
					s=s+A[i][0];
					if(s==s1){
						cout<<"YES"<<endl;
						return 0;
					}
				
			}
		}
		cout<<"NO"<<endl;
	}
	


	





	



	return 0;

}