#include<bits/stdc++.h>
#define ll 	     long long
#define pb          push_back
#define	endl        '\n'
#define vi          vector<int>
#define rep(i,b)    for(int i=0;i<b;i++)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,t=0;
	string s;
	cin>>s;

	rep(i,s.length())
	{
	    t=0;
	    for(int j=i;j<i+7;j++)
	    if(s[i]==s[j])
            t++;
        if(t==7)
            {cout<<"YES";
            return 0;}


	}
	cout<<"NO";}