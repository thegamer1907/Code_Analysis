#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,match=0;
    string s;
    unordered_set<string> us;
    cin>>N>>M;
    for(int i=0;i<N;++i){
        cin>>s;
        us.insert(s);
    }
    for(int i=0;i<M;++i){
        cin>>s;
        if(us.find(s)!=us.end())
            match++;
    }
    if( match%2==1 )N++;
    if( N>M )cout<<"YES\n";
    else cout<<"NO\n";

}
