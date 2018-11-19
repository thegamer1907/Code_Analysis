#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define In_the_name_of_allah_the_merciful ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define Alhamdulillah return 0 ;
long double pi = 3.14159265358979323846264338327950;
vector <string> v;
int main()
{
    In_the_name_of_allah_the_merciful
    string s; cin>>s;
    int n; cin>>n;
    bool f = 0;
    for(int i = 0 ; i < n; i++){
        string barks,r; cin>>barks;
        r = barks;
        reverse(r.begin(),r.end());
        if (s == r || s == barks) f = 1;
        v.push_back(barks);
    }
    if (f == 1) cout<<"YES"<<endl;
    else {
        bool F=0,S =0;
        for(int i = 0 ; i < v.size(); i++){
            if (v[i][1] == s[0]) F= 1;
        }
        for(int i = 0 ; i < v.size(); i++){
            if (v[i][0] == s[1]) S= 1;
        }
        if (F == 1 && S == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    Alhamdulillah
}
