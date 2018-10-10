#include <bits/stdc++.h>

using namespace std;
int n,d;
vector< pair<int,int> > f;
long long cum[100005];
long long binary_func(int i){
    int lo=0,hi=n-1,mid;
    long long sum=0;
    while(lo<hi){
        mid=(lo+hi+1)/2;
        if(f[mid].first-f[i].first>=d) hi=mid-1;
        else lo=mid;
    }
    sum=((i)? cum[lo]-cum[i-1]: cum[lo]);
    return sum;
}

int main()
{
    int x,y;
    long long mx=0;
    cin>>n>>d;
    f.resize(n);
    for(int i=0;i<n;i++){
        cin>>x>>y;
        f[i]=make_pair(x,y);
    }
    sort(f.begin(),f.end());
    for(int i=0;i<n;i++) cum[i]=((i)? cum[i-1]+f[i].second : f[i].second);
    for(int i=0;i<n;i++){
        mx=max(mx,binary_func(i));
    }
    cout<<mx<<endl;

}
