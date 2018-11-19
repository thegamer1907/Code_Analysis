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
	string pas;
	cin>>pas;
	int n;
	cin>>n;
	bool primFin=false;
	bool ultPrim=false;
	bool vale=false;
	forn(i, n){
		string s;
		cin>>s;
		if(s==pas || (s[0]==pas[1]&&s[1]==pas[0])){
			vale=true;
		}
		if(s[0]==pas[1])ultPrim=true;
		if(s[1]==pas[0])primFin=true;
	}
	if(vale || (ultPrim && primFin)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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
