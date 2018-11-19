///////////////////////////////////////
///// << In The Name Of Allah >> /////
/////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(v) v.begin(),v.end()
using namespace std;
const int N = 1e5 + 5;

int main()
{
    string s; int n;
    cin>>s>>n;
    vector<string>v(n);

    for(int i=0; i<n; ++i)
        cin>>v[i];

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            string tmp = v[i] + v[j];
            for(int u=0; u<tmp.size()-2; ++u)
                if(tmp.substr(u, 2) == s)
                    return puts("YES"),0;
        }
    }
    puts("NO");
    return 0;
}
