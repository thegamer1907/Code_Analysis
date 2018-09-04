#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e6+5;
int tab[MAXN];

int check(int n,int s,int k){
    vector <long long> v(n);
    for(int i=0;i<n;i++)
        v[i]=tab[i]+1LL*(i+1)*k;
    sort(v.begin(),v.end());
    long long x=0;
    for(int i=0;i<k;i++)
        x+=v[i];
    return x<=s ? x : 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s;
    cin >> n >> s;
    for(int i=0;i<n;i++)
        cin >> tab[i];
    int lo=0,hi=n;
    while(lo<hi){
        int mid=(lo+hi+1)/2;
        if(check(n,s,mid))
            lo=mid;
        else
            hi=mid-1;
    }
    cout << lo << " " << check(n,s,lo);
}
