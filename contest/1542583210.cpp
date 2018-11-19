// Example program
#include <bits/stdc++.h>
using namespace std;
bool flag=false;
long long n;
float m;
float s;
long long sa;
long long h;
int main()
{
    cin>>h>>m>>s;
    cin>>n>>sa;
    n%=12;
    s/=5;
    m/=5;
    if(m==12)
        m=0;
    if(s==12)
        s=0;
    sa%=12;
    h%=12;
    if(sa>n)
        swap(sa,n);
        //sa<n
    
        if(m>=sa && m<n && h>=sa && h<n && s>=sa && s<n)
        {
            flag=true;
        }
        if((m<sa || m>=n) && (h<sa || h>=n) && (s<sa || s>=n))
        {
            flag=true;
        }
        if(flag==true)
            cout<<"YES";
        else cout<<"NO";
}
