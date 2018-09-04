#include <bits/stdc++.h>
using namespace std;
int n,d,m,s;
vector<pair<long long int,long long int> > friends;
int main(){
    //freopen("test.in","r+",stdin);
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>m>>s;
        friends.push_back(make_pair(m,s));
    }
    sort(friends.begin(), friends.end());
    for(int i=1;i<n;i++)friends[i].second+=friends[i-1].second;
    long long int result = 0;
    for(int i=0;i<n;i++){
        int j = lower_bound(friends.begin(),friends.end(), make_pair(friends[i].first + d, 0LL)) - friends.begin();
        result = max(result, friends[j-1].second - (i?friends[i-1].second:0LL));
    }
    cout<<result<<endl;
}
