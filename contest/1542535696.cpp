#include<bits/stdc++.h>
#define S second
#define F first
#define LL long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    string s, ns  ;
    cin >> s ;
    int n , z=0 , o=0;
    cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        cin >>ns ;
        if(ns==s)return cout<<"YES",0;
        if(ns[0]==s[1])z=1 ;
        if(ns[1]==s[0])o=1 ;

    }
    z&&o?cout<<"YES":cout<<"NO";

    return 0 ;
}
