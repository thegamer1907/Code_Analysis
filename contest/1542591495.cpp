#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define pii pair< int,int>
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define ll long long int
#define mod 1000000007
int main(){
    string a;
    cin>>a;
    int n;
    cin>>n;
    int gg=0;
    vector<int> s1,s2;
    while(n--)
    {
        string p;
        cin>>p;
       if(p==a)
        gg=1;
        if(p[1]==a[0])
            s1.pb(n);
        if(p[0]==a[1])
            s2.pb(n);
    }
    int i,j;
   if(s1.size() and s2.size())
   {
    cout<<"YES";
    return 0;
   }
    if(gg==1)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0; 
    }