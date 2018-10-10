#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,d,rez=0;cin>>n>>d;
    vector<pair<long long int,long long int> > v(n);
    for(int i = 0 ; i < n ; i ++){
        cin>>v[i].first>>v[i].second;
    }
//    cout<<"fak";
    sort(v.begin(),v.end());
    for(long long int l = 0,r=0,s=0; r<n ; r ++){
  //    cout<<v[r].first<<" "<<v[r].second<<endl;
        s+=v[r].second;
        while(v[r].first-v[l].first>=d){
            s-=v[l].second;
            l++;
        }
        rez=max(rez,s);
    }
    cout<<rez;
}
