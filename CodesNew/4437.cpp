#include<bits/stdc++.h>
using namespace std;
int n;
struct hashtags
{
    string s;
};
hashtags v[500002];
deque<int>pbu;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>v[i].s;
    for(int i=1;i<n;++i)
    {
        for(int j=1;j<v[i].s.size();++j)
            if(v[i+1].s[j]){
                if(v[i].s[j]<v[i+1].s[j])
                    break;
                else
                    if(v[i].s[j]>v[i+1].s[j]){
                        while(v[i].s.size()>j)
                          v[i].s.pop_back();
                        break;
                    }
            }
            else{
                while(v[i].s.size()>j)
                    v[i].s.pop_back();
                break;
            }
        if(v[i].s.size()>1)
            pbu.push_back(i);
        else
        {
            int m=pbu.size();
            for(int j=0;j<m;++j)
                while(v[pbu[j]].s.size()>1)
                    v[pbu[j]].s.pop_back();
            pbu.clear();
        }
    }
    for(int i=n-1;i>=1;--i)
    {
        for(int j=1;j<v[i].s.size();++j)
            if(v[i+1].s[j]){
                if(v[i].s[j]<v[i+1].s[j])
                    break;
                else
                    if(v[i].s[j]>v[i+1].s[j]){
                        while(v[i].s.size()>j)
                          v[i].s.pop_back();
                        break;
                    }
            }
            else{
                while(v[i].s.size()>j)
                    v[i].s.pop_back();
                break;
            }
    }
    for(int i=1;i<=n;++i)
        cout<<v[i].s<<'\n';
    return 0;
}
