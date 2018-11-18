#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

int main()
{
    string s ;
    cin >>s ;
    int n ; cin >>n ;
    bool b=0 ;
    vector<pair<char ,char> > v(n) ;
    for(int i=0 ; i<n; i++)
    {
        cin >>v[i].first>>v[i].second ;
        if(v[i].first==s[0]&&v[i].second==s[1])b=1 ;
    }
    if(b){cout << "YES" ; return 0 ;}
    for(int i=0 ;i<n ; i++)
    {
        for(int j=0; j <n; j++)
        {
            if(s[0]==v[i].second&&s[1]==v[j].first )
            {cout << "YES" ; return 0 ;}
        }
    }
    cout <<"NO";
    return 0 ;
}
