#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int n,m,l,h,ar[200005];

bool check(int mid)
{
    for(int i=0; i<mid; i++) a[ar[i]-1]='0';
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(b[cnt]==a[i]) cnt++;
        if(cnt>=m) return true;
    }
    return false;
}

int main()
{
    cin>>c>>b;
    n=c.length(); m=b.length();
    for(int i=0; i<n; i++) cin>>ar[i];
    l=0, h=n-m;
    while(l<h)
    {
        a=c;
        int mid=l+(h-l+1)/2;
        if(check(mid))l=mid;
        else h=mid-1;
    }
    cout<<l<<endl;
    return 0;
}
