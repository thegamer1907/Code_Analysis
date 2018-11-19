#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define pb push_back
#define sf scanf
#define ff first
#define M 1000000007
#define ss second
#define pf printf
#define mp make_pair
#define all(V) V.begin(),V.end()

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    string pw;
    cin>>pw;
    int n;
    cin>>n;
    bool yes=0;
    int f=0;
    int se=0;
    int find=-1;
    int sind=-1;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==pw)
        {
            yes=1;
        }
        if(s[i][1]==pw[0])
        {
            f++;
            find=i;
        }
        if(s[i][0]==pw[1])
        {
            se++;
            sind=i;
        }
    }
    if(yes) cout<<"YES"<<endl;
    else if(f == 0 || se==0)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
	return 0;
}

