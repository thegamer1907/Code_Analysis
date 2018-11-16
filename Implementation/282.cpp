#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);

    int n, a, b;
    cin>>n>>a>>b;

    int ans=1;
    while (1){

        int a1, b1;
        a1=a/2;
        if (a&1){
            a1++;
        }

        b1=b/2;
        if (b&1){
            b1++;
        }

        if (a1==b1){
            break;
        }

        ans++;
        a=a1; b=b1; n/=2;

    }

    if (n==2){
        cout<<"Final!\n";
    }
    else {
        cout<<ans<<"\n";
    }

    return 0;
}
