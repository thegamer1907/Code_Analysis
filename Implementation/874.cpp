#include<bits/stdc++.h>
#define ll 	     long long
#define pb          push_back
#define all(a)      (a).begin(),(a).end()
#define	endl        '\n'
#define vi          vector<int>
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define bs          binary_search
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,t,i;
	cin>>n>>t;
	string s;

	cin>>s;
	rep(i,0,t)
	{

	    for(int j=0;j<n-1;j++)

        {
            if(s[j]<s[j+1])
            {
            int p=s[j];
            s[j]=s[j+1];
            s[j+1]=p;
            j++;
            }
        }
	}
	rep(i,0,n)
	cout<<s[i];}
