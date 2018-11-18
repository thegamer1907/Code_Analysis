#include <bits/stdc++.h>
using namespace std;

#define Ziko	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 3.14159265359
#define sortr(x) sort(x.begin(),x.end())
#define fo(i,n) for (int i = 0; i < n; i++)
#define foo(j,n) for (int j = 0; j < n; j++)
#define fl(i,j,n) for(int i=j;i<n;++i)
#define line(n) getline(cin,n)
#define pb push_back
#define f first
#define s second
#define line(s) getline(cin,s)

typedef long long int ll;
typedef unsigned long long int ull;

ll gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);};
ll lcm(int a[],int n){ll ans=a[0];fl(i,1,n){ans*=a[i]/(gcd(a[i],ans));}return ans;};

int main()
{
	Ziko
	bool x=0,y=0;
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string>v(n);
    fo(i,n)
    {
        cin>>v[i];
    }
    fo(i,n)
    {
        if(v[i]==s){cout<<"YES"<<endl;return 0;}
    }
    fo(i,n)
    {
        string z=v[i];
        if(z[0]==s[1]){y=1;}
        if(z[1]==s[0]){x=1;}
        if(x&y){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
	return 0;
}
