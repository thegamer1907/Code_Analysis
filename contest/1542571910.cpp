#define debug_iv_ac ios::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
 
#define pb push_back
#define  mp make_pair
#define pp pop_back
#define pf push_front
#define fi first
#define se second
#define maxn 100005
typedef long long ll;
using namespace std;
#define pi pair<int,int>



int f[30],l[30];
int main() {
    debug_iv_ac;
   	string s;
   	cin>>s;
   	int n;
   	cin>>n;
   	for(int i=1;i<=n;i++)
   	{
   		string s1;
   		cin>>s1;
   		if(s1==s)
   		{
   			cout<<"YES";return 0;
		   }
   		f[s1[0]-'0']++,l[s1[1]-'0']++;
	}
	if(f[s[1]-'0']&&l[s[0]-'0'])
	{
		cout<<"YES";
	}
	else cout<<"NO";
    return 0;
}
 