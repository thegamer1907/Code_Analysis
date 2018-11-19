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
    ll t, n, i, j, ans1=0, ans2=0;
    char x, y;
    cin>>x>>y;
    cin>>n;
    //cout<<"n = "<<n<<endl;
    //cout<<"oo\n";
    std::vector<string> v(n);
    //cout<<"furr\n";
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        //cout<<"vi = "<<v[i]<<endl;
    }
    
    for(i=0; i<n; i++)
    {
        if(v[i][1] == x)
            ans1 = 1;
        if(v[i][0] == y)
            ans2 = 1;
        if(v[i][0]==x and v[i][1]==y)
            ans1 = ans2 = 1;
    }
    
    if(ans1*ans2 > 0)
        cout<<"YES\n";
    else 
        cout<<"NO\n";

    return 0;
}