#include<bits/stdc++.h>
using namespace std;
int n;
long long k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    int sol=1;
    while(k%2==0)
        k/=2,++sol;
    cout<<sol;
    return 0;
}
