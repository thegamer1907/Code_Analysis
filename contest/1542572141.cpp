#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(a,n) for(int i=a;i<n;++i)
#define arrin(n) for(int i=0; i < n; ++i) cin>>arr[i];
#define arrout(n) for(int i=0; i < n; ++i) cout<<arr[i]<<" ";cout<<nl;
#define mod 1000000007
#define pb push_back
typedef long long ll;

//there are two ways of reaching the points: clockwise or anti-clockwise. 

int main()
{
    fastio();
    string ans;
    float h, m, s, dec=0;
    ll t1, t2, ang1, ang2, flag=0, temp=0;
    cin>>h>>m>>s>>t1>>t2;
    h=(h*30+m/2.0+s/120.0);
    dec=h-floor(h);
    h=(int)floor(h)%360+dec;  //final h value
    m=(m*6+s/10.0);
    dec=m-floor(m);
    m=(int)floor(m)%360+dec;  //final m value
    s=s*6;                    //final s value
    //cout<<h<<" "<<m<<" "<<s<<endl;
    if(t2>t1)
    {
        ang1=t1*30;
        ang2=t2*30;
        if((s>=ang1&&s<=ang2) || (m>=ang1&&m<=ang2) || (h>=ang1&&h<=ang2))
        {
            flag=1;
        }
        if((s>=ang2&&s<=360||s>=0&&s<=ang1) || (m>=ang2&&m<=360||m>=0&&m<=ang1) || (h>=ang2&&h<=360||h>=0&&h<=ang1))
        {
            temp=1;    
        }
    }
    else if(t1>t2)
    {
        ang1=t1*30; 
        ang2=t2*30;
        if((s>=ang2&&s<=ang1) || (m>=ang2&&m<=ang1) || (h>=ang2&&h<=ang1))
        {
            flag=1;
        }
        if((s>=ang1&&s<=360||s>=0&&s<=ang2) || (m>=ang1&&m<=360||m>=0&&m<=ang2) || (h>=ang1&&h<=360||h>=0&&h<=ang2))
        {
            temp=1;    
        }
        
    }
    //cout<<flag<<" "<<temp;
    if(temp==1&&flag==1)
    {
        ans="NO";
    }
    else
    {
        ans="YES";
    }
    cout<<ans<<endl;
    return 0;
}