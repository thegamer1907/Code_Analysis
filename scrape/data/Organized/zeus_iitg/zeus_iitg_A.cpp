#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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

#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define o_setll tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

using namespace std;
using namespace __gnu_pbds;

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
    o_setll s;
    //set<int>::iterator itr;
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
            //itr=s.find(v[k].second);
            int index=s.order_of_key(v[k].second);
            ll left=(ll)index-(ll)(k-i);
            ll right;
            if(k!=j-1){
            //itr=s.find(v[k+1].second);
            right=s.order_of_key(v[k+1].second)-(ll)index - 1;
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