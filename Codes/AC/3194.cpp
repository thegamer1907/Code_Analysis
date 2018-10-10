#include<bits/stdc++.h>
#define pb push_back
using namespace std;
#define ll long long
const int maxn=1e5+5;
int n;
int a[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    int mi=1e9+7;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mi=min(a[i],mi);
    }
    for(int i=0;i<n;i++)
    {
        a[i]-=mi;
    }
    int p=(mi)%n;
    int tmp=0;
    while(1)
    {
        int pos=(p+tmp)%n;
        if(tmp>=a[pos])
        {
            cout<<pos+1<<endl;return 0;
        }
        tmp++;
    }
   return 0;
}
