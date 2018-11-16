#include <bits/stdc++.h>

using namespace std;

int w,k,n,ans=0;

int main()
{
    ios::sync_with_stdio(0);

    cin >> k>>n>>w;

    //cout << max(0,(w*(w+1)*k/2)-n);
    for (int i=1;i<=w;i++){

        ans+=i*k;

    }
cout<<max(0,ans-n);
    return 0;
}
