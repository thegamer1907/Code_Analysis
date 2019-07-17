#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
#define pb push_back
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/__gcd((a),(b))
#define clr(x) x.clear()
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define mp make_pair
#define hell 1000000007

using namespace std;

bool compare(pair<int,int> &a,pair<int,int> &b){
    if(a.first!=b.first)
        return a.first>b.first;
    else
        return a.second<b.second;
}

int main()
{
    IOS
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb({y,x});
    }
    sort(v.begin(),v.end(),compare);
    set<int> s;
    set<int>::iterator itr;
    ll res=0;
    for(int i=0;i<n;)
    {
        int j=i;
        ll count=0;
        while(j<n&&v[j].first==v[i].first){
        s.insert(v[j].second);
        j++;
        count++;
        }
        res=res+(ll)s.size()*count;
        res=res-(count*(count-1))/2;
        for(int k=i;k<j;k++){
            itr=s.find(v[k].second);
            int index=distance(s.begin(),itr);
            ll left=(ll)index-(ll)(k-i);
            ll right;
            if(k!=j-1){
            itr=s.find(v[k+1].second);
            right=distance(s.begin(),itr)-(ll)index - 1;
            }
            else
                right=(ll)s.size()-(ll)index - 1;
            //cout<<left<<" "<<right<<" "<<v[k].second<<"\n";
            res=res+left*right;
        }
        i=j;
    }
    cout<<res;
    return 0;
}