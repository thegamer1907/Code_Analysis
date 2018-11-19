#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    if (t1 > 11) t1-=12;
    if (t2> 11 ) t2-=12;
    if (h > 11) h-=12;
    m = s  / 60 + m;
    h = m / 60 + h;
    m/=5;
    s/=5;
  //  cout<<fixed<<setprecision(5);
   // cout<<h<<" "<<m<<" "<<s<<endl;

    if (t1 > t2) swap(t1,t2);

    ll ans = 0;
    if (h > t1 && h < t2) ans++;
    if (m > t1 && m < t2) ans++;
    if (s > t1 && s < t2) ans++;
    if (ans == 0 || ans == 3)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}
