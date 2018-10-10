#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
typedef pair<int,int>ii;
typedef pair<vector<int>,int>vii;
const int N=1000005;

int main()
{
    //freopen("test.in","r",stdin);
    int n,mx=0,last=0,k;
    string s;
    cin>>n>>k>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')cnt1++;
        else cnt2++;
        if(cnt1<=k||cnt2<=k)
            mx=max(mx,i-last+1);
        while(cnt1>k&&cnt2>k){
            if(s[last]=='a')cnt1--;
            else cnt2--;
            last++;
        }
    }
    cout<<mx;
    return 0;
}
