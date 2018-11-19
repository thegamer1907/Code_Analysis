#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef		vector<int>				 vi;
typedef 	vector<vi>				vii;
typedef		pair<int,int>			pii;
typedef		unsigned long long		ull;
typedef		long long				ll ;
typedef 	vector<ll> 				vl ;
typedef 	vector<vl> 				vll;
typedef 	map<string,int>  		msi;
typedef  	map<int,int> 			mii;
typedef 	set<int> 				si ;

#define MOD (int)(1e9+7)
#define rep(i,n)   		for(int i=0; i < n ; i++ )
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main(){
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)h=0;
    if(t1==12)t1=0;
    if(t2==12)t2=0;
    int cnt=0;
    int tem=t1>t2?t2:t1;
    int tem1=t1<t2?t2:t1;
    if(tem<=h&&tem1>h)cnt++;
    if(tem<=m/5&&tem1>m/5)cnt++;
    if(tem<=s/5&&tem1>s/5)cnt++;
    if(cnt==0||cnt==3)cout<<"YES";
    else cout<<"NO";
return 0;
}
