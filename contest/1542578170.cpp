#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fr first
#define sc second
#define MAX ((ll)(1e18+100))
#define MOD ((ll)(1e9+7))
#define HS1 ((ll)(137))
#define HS2 ((ll)(1e9+9))
#define ARRS ((ll)(1e5+900))
#define pb push_back

ll n;
string l[ARRS];
string r[ARRS];
ll ss[ARRS];
bool f[210][160000];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>l[i];
		r[i]=l[i];
		string t=l[i];
		for(int x=0; x<t.size(); x++){
			ll q=1;
			for(int y=x; y<min((ll)t.size(),x+16); y++){
				q=q*2+t[y]-'0';
				f[i][q]=1;
			}
		}
		if(l[i].size()>20)
			l[i]=l[i].substr(0,20);
		if(r[i].size()>20)
			r[i]=r[i].substr(r[i].size()-20);
	}

	ll t,k,p;
	cin>>t;
	ll C=n;
	//cout/g<<t<<endl;
	while(t--){
		cin>>k>>p;
		k--;
		p--;

		l[C]=l[k]+l[p];
		r[C]=r[k]+r[p];

		if(l[C].size()>20)
			l[C]=l[C].substr(0,20);
		if(r[C].size()>20)
			r[C]=r[C].substr(r[C].size()-20);


		string t;
		t=r[k]+l[p];
		for(int x=0; x<t.size(); x++){
			ll q=1;
			for(int y=x; y<min((ll)t.size(),x+16); y++){
				q=q*2+t[y]-'0';
				f[C][q]=1;
			}
		}

		ll pas=0,e=1;
		for(int i=2; i<(1<<17); i++){
			f[C][i]|=f[k][i];
			f[C][i]|=f[p][i];
		}
		for(int i=2; i<(1<<17); i++){
			if(!f[C][i]){e=i;break;}
		}
		while(e){
			pas++;
			e>>=1;
		}

		//cout<<C<<" -> "<<l[C]<<" "<<r[C]<<endl;
		cout<<pas-2<<endl;
		C++;
	}
	return 0;
}
