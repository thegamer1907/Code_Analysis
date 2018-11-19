#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define M 1000000007
#define PII pair<int, int>
#define pb push_back
#define mp make_pair
#define forn(i, n) for(int i=0;i<(int)n;i++)
#define for1(i, n) for(int i=1;i<(int)n;i++)
#define for2(i, n) for(int i=1;i<=(int)n;i++)
typedef long long ll;
int main()
{
    int h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    bool ans = 0;
    if(t1 == t2)
        ans = 1;

    if(t1 == 12)
        t1 = 0;
    if(t2 == 12)
        t2=0;
    if(h == 12)
        h = 0;
    h *= 5;
    t1 = t1*5;
    t2 *= 5;
    int a1=0, a2,a3, a4, a5, a6;
    a1=a2=a3=a4=a5=a6=0;
    for(int i=min(h, s)+1;i<=max(h, s);i++){
        if(t1==i)
            a1=1;
        if(t2==i)
            a2=1;
    }
    if(!a1 && !a2){
        a1 = a2 = 1;
    }
    for(int i=min(h, m)+1;i<=max(h, m);i++){
        if(t1==i)
            a3=1;
        if(t2==i)
            a4=1;
    }
    if(!a3 && !a4){
        a3 = a4 = 1;
    }
    for(int i=min(m, s)+1;i<=max(m, s);i++){
        if(t1==i)
            a5=1;
        if(t2==i)
            a6=1;
    }
    if(!a5 && !a6){
        a5 = a6 = 1;
    }
    if(a1 && a2 && a3 && a4 && a5 && a6)
        ans = 1;
    if(ans)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
