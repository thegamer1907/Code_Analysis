/* ***************************************
Author        :Scau.ion
Created Time  :2017/10/05 15:18:45 UTC+8
File Name     :ion.cpp
*************************************** */

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define ULL unsigned long long
#define PB push_back
#define MP make_pair
#define PII pair<int,int>
#define VI vector<int>
#define VPII vector<PII>
#define X first
#define Y second
#define IOS ios::sync_with_stdio(0);cin.tie(0);
#define IN freopen("in", "r", stdin);
#define OUT freopen("out", "w", stdout);

int main()
{
    int h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    if (t1 > t2) swap(t1, t2);
    int s1 = 0, s2 = 0;

    if (h < t1 || h >= t2) ++ s1;
    else ++ s2;

    m /= 5;
    if (0 == m) m = 12;
    if (m < t1 || m >= t2) ++ s1;
    else ++ s2;

    s /= 5;
    if (0 == s) s = 12;
    if (s < t1 || s >= t2) ++ s1;
    else ++ s2;

    if (s1 == 0 || s2 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
