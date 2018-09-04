#include<bits/stdc++.h>
using namespace std;
#define fori(a,b) for(lli (i)=(lli)(a);(i)<=(lli)(b);(i)++)
#define forj(a,b) for(lli (j)=(lli)(a);(j)<=(lli)(b);(j)++)
#define fork(a,b) for(lli (k)=(lli)(a);(k)<=(lli)(b);(k)++)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1000000007
#define pi 3.14159265359
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sz(a) (lli)(a).size()
#define iter(a) typeof((a).begin())
typedef long long int lli;
typedef vector< lli > vlli;
typedef pair<lli,lli> plli;
typedef set<lli> slli;
typedef map<lli,lli> mlli;
 
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
 
//*****************************************************************
lli na,nb,nc;
lli pa,pb,pc;
lli AM;
lli A,B,C;

bool check(lli mid){
	if(pa*max(mid*A-na,(lli)0)+pb*max(mid*B-nb,(lli)0)+pc*max(mid*C-nc,(lli)0)<=AM)
		return true;
	return false;
}

lli binary_h(lli low ,lli high){   //change the datatypes if need some thing else
	if(high<low ){
		return 0;
	}

	lli mid=(low +high)/2;
	bool cc=check(mid);
	if(cc &&(mid!=high?check(mid+1)==false:true)){
		return mid;

	}
	else if(!cc){					 
		return binary_h(low,mid-1);
	}
	else{
		return binary_h(mid+1,high);
	}
}


int main()
{
	string ss;
	cin>>ss;
	lli n=ss.length();
	A=B=C=0;
	fori(1,n){
		if(ss[i-1]=='B')
			A++;
		else if(ss[i-1]=='S')
			B++;
		else
			C++;
	}

	cin>>na>>nb>>nc;
	cin>>pa>>pb>>pc;
	cin>>AM;
	cout<<binary_h(0,10000000000000)<<endl;
	return 0;
} 