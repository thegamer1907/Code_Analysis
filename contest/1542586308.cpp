#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main()
{//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
int h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;
if (t1>t2) swap(t1,t2);
    if (h>=t1 and h<t2)
{
    if (m/5>=t2 or s/5>=t2) {cout<<"NO";return 0;}
    if (m/5<t1 or s/5<t1) {cout<<"NO";return 0;}
    cout<<"YES";
    return 0;
}
    if (m/5>=t1 and m/5<t2) {cout<<"NO";return 0;}
    if (s/5>=t1 and s/5<t2) {cout<<"NO";return 0;}
    cout<<"YES";

 return 0;
}

