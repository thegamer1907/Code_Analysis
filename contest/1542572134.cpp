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
    string s,a;
    cin>>s;
    int n;
    cin>>n;
    int f1=0,f2=0,f=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==s)f=1;
         if(a[0]==s[1])f1=1;
         if(a[1]==s[0])f2=1;

    }
    if((f1==1&&f2==1)||f==1)cout<<"YES";
    else cout<<"NO";
return 0;
}
