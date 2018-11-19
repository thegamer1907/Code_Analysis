#include <bits/stdc++.h>
#define S second
#define F first
#define ll long long
#define pb push_back

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    long double h,m,s,t1,t2;
    long double th=360/12;
    long double tm=360/60;
    long double ts=360/60;
    cin >> h >> m >> s;
    cin >> t1 >> t2;
    if (m==0) m=60;
    if (s==0) s=60;
    t1=t1*th;
    t2=t2*th;
    s=s*ts;
    if (s>360) s-=360;
    m=m*tm+((s/360)*6);
    if (m>360) m-=360;
    h=h*th+((m/360)*30);
    if (h>360) h-=360;
    //cout << h << " " << m << " " << s << endl;
    if (t1>t2) swap(t1,t2);
    if (t1<t2){
        if ((t1>h || t2<h) &&
            (t1>m || t2<m) &&
            (t1>s || t2<s)){
                cout << "YES" << endl;
                return 0;
            }
        if ((t1<h && t2>h) &&
            (t1<m && t2>m) &&
            (t1<s && t2>s)){
                cout << "YES" << endl;
                return 0;
            }
    }
    cout << "NO" << endl;
    return 0;
}