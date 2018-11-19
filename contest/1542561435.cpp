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
	int h, m, s;
	int t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	int a=min(t1,t2);
	int b=max(t1,t2);
	if( ((h>a && h<b) || (h==a && (m>0 || s>0))) || (m>a*5 && m<b*5) || (m==5*a && s>0) || (s>a*5 && s<b*5) ){
	}else{
		cout<<"YES"<<endl;
		return;
	}
	
	if( h>b || h<a || m>b*5 || m<a*5 || s>b*5 || s<a*5 || (h==b && m+s>0) || (m==b*5 && s>0) ){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
		return;
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
