#include <bits/stdc++.h>
#define F first
#define S second
typedef long long ll;
using namespace std;



int main()
{

    ll n,m,k;
    ll a[100010];
    cin >>n>>m>>k;
    for (int i=0;i<m;i++) {
        cin >>a[i];
    }

    int j=0;
    int del=0;
    int ans=0;
    for (;j<m;){

        int cur=a[j]-1-del;
        cur/=k;
        int cnt=0;
        while (j<m&&(a[j]-1-del)/k==cur){
            j++;
            cnt++;
        }
        ans++;
        del+=cnt;

    }
    cout <<ans<<endl;
    return 0;
}