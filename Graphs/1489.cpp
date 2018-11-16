#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double
#define mod 1000000007
#define F first
#define S second
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1;i<n;i++)
    cin>>a[i];
    
    int pos=1;
    while(pos<=n)
    {
        //cout<<pos<<endl;
        if(pos==t)
        {
            cout<<"YES";
            return 0;
        }
        if(pos>t)
        {
            cout<<"NO";
            return 0;
        }
        pos+=a[pos];
    }
    cout<<"NO";
    
    return 0;
}