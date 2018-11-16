#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep1(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define per(i,n) for(int (i)=(n)-1;(i)>=0;(i)--)
#define per1(i,m,n) for(int (i)=(n)-1;(i)>=(m);(i)--)
#define len(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define maxm 1e5+7
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
using namespace std;
bool a[100010];
int cnt[100010];
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
//overflow ll vs int
//operations problem
//look at the constraints again
string s;
cin>>s;
if(s.find("AB")==string::npos || s.find("BA")==string::npos){
cout<<"NO"<<endl;
return 0;
}
int p=s.find("AB");
if(s.find("BA",p+2)!=string::npos){
cout<<"YES"<<endl;
return 0;
}
p=s.find("BA");
if(s.find("AB",p+2)!=string::npos){
cout<<"YES"<<endl;
return 0;
}
cout<<"NO"<<endl;
}


