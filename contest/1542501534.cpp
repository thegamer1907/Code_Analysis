#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    ll i,h,m,s,ta,tb;
    cin>>h>>m>>s>>ta>>tb;
    ll tem=(m*60)+s;
    double a[3],t1,t2; t1=(double)ta; t2=(double)tb;
    a[0]=((double)tem/3600 + (double)(h%12)); 
    a[1]=((double)s/60 + (double)m); a[1]/=5;
    a[2]=(double)s/5;
    sort(a,a+3);
    
    ll f=0;
    if((t1<a[1] && t1>a[0]) && (t2<a[1] && t2>a[0]))
        f=1;
    else if((t1<a[2] && t1>a[1]) && (t2<a[2] && t2>a[1]))
        f=1;
    else if( ((t1>a[2] && t1<=12)||(t1>=0 && t1<a[0]) ) && ((t2>a[2] && t2<=12)||(t2>=0 && t2<a[0])) ) 
        f=1;
    
    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
        
    return 0;
}