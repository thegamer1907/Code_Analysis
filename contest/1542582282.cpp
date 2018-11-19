// This file is in ~/.config/geany/templates/files
#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<(int)(n); i++)
#define forsn(i,s,n) for(int i=(s);i<(int)(n); i++)
#define debug(x) cout << #x << " = "  << x << endl
#define pb push_back
#define mp make_pair
typedef long long tint;
int toNumber (string s)
{
	int Number;
	if ( ! (istringstream(s) >> Number) ) Number = 0; // el string vacio lo manda al cero
	return Number;
}
string toString (int number)
{
    ostringstream ostr;
    ostr << number;
    return  ostr.str();
}

tint ele(tint a, tint b){
	if(b==0)return 1;
	if(b%2==0){
		return ele((a*a), b/2);
	}else{
		return a*ele((a*a), b/2);
	}
}

tint mcd(tint a, tint b){
	if(a==0)return b;
	return mcd(b%a, a);
}

double d_abs(long a, long b){
	if(a>b){
		return a-b;
	}
	return b-a;
}

struct lex_compare {
    bool operator() (const string& s1, const string& s2) const {
        if(s1.size()!=s2.size()) return s1.size()<s2.size();
        return s1<s2;
    }
};



void solve(){
	int n, k;
	cin>>n>>k;
	int v[n][k];
	int cant[k];
	forn(i,k)cant[i]=0;
	bool gane=false;
	forn(i, n){
		bool allcero=true;
		forn(j, k){
			cin>>v[i][j];
			if(v[i][j]){
				cant[j]++;
				allcero=false;
			}
		}
		if(allcero)gane=true;
	}
	if(gane){
		cout<<"YES"<<endl;
		return;
	}
	if(k==1){
		cout<<(cant[0]==n ? "NO" : "YES")<<endl;
		return;
	}else if(k==2){
		bool cerouno=false;
		bool unocero=false;
		forn(i, n){
			if(v[i][0]==0 && v[i][1]==0){
				cout<<"YES"<<endl;
				return ;
			}
			if(v[i][0]==0 && v[i][1]==1){
				cerouno=true;
			}
			if(v[i][0]==1 && v[i][1]==0){
				unocero=true;
			}
		}
		if(unocero && cerouno){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		return;
	}else {
		bool estaSolo[k];
		forn(i,k)estaSolo[i]=false;
		forn(i, n){
			int esta=0;
			forn(j, k){
				esta+=v[i][j];
			}
			if(esta==1){
				forn(j, k){
					if(v[i][j])estaSolo[j]=true;
				}
			}
		}
		forn(j, k){
			if(estaSolo[j]&&cant[j]<n){
				cout<<"YES"<<endl;
				return;
			}
		}
		if(k==3){
			cout<<"NO"<<endl;
		}else{
			map<int,int> m;
			forn(i, n){
				int su=0;
				forn(j, k){
					su+=(v[i][j]*(1<<j));
				}
				m[su]++;
			}
			if( (m[3]>0 && m[12]>0) || (m[5]>0 && m[10]>0) || (m[9]>0  && m[6]>0) ){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
}



int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	T=1;
	while(T--){
		solve();
	}
}
