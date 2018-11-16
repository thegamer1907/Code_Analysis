#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define N 1000100
#define LB lower_bound
#define M 1000000007
#define UB upper_bound
#define MP make_pair
#define LD long double
#define F first
#define S second
#include<bits/stdc++.h>
#define LL long long
#define F first

int main()
{
    LL t,i,j,l,m,n,x,y,z,u,v;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin,s);
    set<char> chs;
    for(i=0;i<s.length();i++)
    {
        chs.insert(s[i]);
        // cout<<s[i]<<endl;
    }
    if(chs.size()==2)
    {
        cout<<0;
        return 0;
    }
    cout<<max(1,(int)chs.size()-4)<<endl;    
}
