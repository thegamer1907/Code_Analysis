#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define dep(i,a,b) for(int i=a;i>=b;i--)
#define mem(x,num) memset(x,num,sizeof x)
using namespace std;

int n;
char s[500],t[500];
char head[500],tail[500];

int main()
{
    cin>>s>>n;
	rep(i,1,n){
	    cin>>t;
		if((t[0]==s[0])&&(t[1]==s[1])){cout<<"YES\n";return 0;}
	    tail[t[0]]=true;
	    head[t[1]]=true;
	}
	if(head[s[0]]&&tail[s[1]]){cout<<"YES\n";return 0;}
	cout<<"NO\n";
	return 0;
}