/*
Been rusting in rubble
Running to a faint
Need a brand new coat of paint
I found myself in trouble
Thinking 'bout what ain't
Never gonna be a saint
Saying float like an eagle
Fall like the rain
Pouring to put out the pain
Oh again and again

Now I'm hyp, hypnotised
Yeah I trip, when I look in your eyes
Oh I'm hyp, hypnotised
Yeah I slip and I'm mesmerized
*/
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ios::sync_with_stdio(false);
    ll t, n, i, j, ans=0;
    double h, m, s, tone, ttwo, mx, mn;
    cin>>h>>m>>s>>tone>>ttwo;
    mn = min(tone, ttwo);
    mx = max(tone, ttwo);
    tone = mn*5;
    ttwo = mx*5;

    m = m + s/60.0;
    h = (h + m/60.0)*5.0;
    if(h>=60.0)
        h-=60.0;
    if(h<ttwo and h>tone)
        ans++;
    if(m<ttwo and m>tone)
        ans++;
    if(s<ttwo and s>tone)
        ans++;
    if(m==tone or s == tone or h==tone or m==ttwo or s==ttwo or h==ttwo)
        ans = 1;
    if(ans == 3 or ans==0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}