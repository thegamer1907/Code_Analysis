#include<bits/stdc++.h>


using namespace std;
const int N=1e5+5;
int a[N];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int maxx=1,tot=1;
    for(int i=2;i<=n;i++){
        if(a[i]>a[i-1])
            tot++;
        else tot=1;
        maxx=max(tot,maxx);
    }
    cout<<maxx<<endl;
    return 0;
}
