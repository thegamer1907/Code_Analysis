#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
#define inf 200000000000000
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,x;
    cin>>n>>x;
    int a[30001] = {0};
    for(int i=1;i<n;i++){
        cin>>a[i];
        a[i]+=i;
    }
    int i = 1;
    while(i<=x){
        if(i == x){
            cout<<"YES";
            return 0;
        }
        else {
            i = a[i];
            
        }
    }
    cout<<"NO";
}