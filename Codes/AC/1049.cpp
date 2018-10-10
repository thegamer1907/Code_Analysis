#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    scanf("%d %d",&n,&d);

    vector<pair<int,long long> >vec;
    for(int i=0,m,s;i<n;i++){
        scanf("%d %d",&m,&s);
        vec.push_back(make_pair(m,s));
    }
    sort(vec.begin(),vec.end());

    for(int i=1;i<vec.size();i++)vec[i].second+=vec[i-1].second;

    //printf("okay\n");
    long long res=0;
    for(int i=0;i<vec.size();i++){
        int idx=(int)(lower_bound(vec.begin(),vec.end(),make_pair(vec[i].first+d,0LL))-vec.begin())-1;
        //cout<<i<<" "<<idx<<endl;

        if(i==0)res=vec[idx].second;
        else res=max(res,vec[idx].second-vec[i-1].second);
    }
    printf("%lld\n",res);

    return 0;
}
