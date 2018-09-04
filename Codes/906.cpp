/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
int n,k;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    cin>>s;
    int sol=0;
    for(char c='a';c<='z';++c)
    {
        vector<int>lg;
        vector<int>st;
        bool good=0;
        for(int j=0;j<n;++j)
        {
            if(!good && s[j]==c)
                lg.push_back(1),st.push_back(j),sol=max(sol,1),good=1;
            else
                if(s[j]==c)
                    ++lg.back(),sol=max(sol,lg.back());
                else
                    good=0;
        }
        if(lg.size()==0)
        {
            sol=max(sol,k);
            continue;
        }
        if(lg.size()==1)
        {
            sol=max(sol,min(lg[0]+k,n));
            continue;
        }
        int sst=0;
        int sused=0;
        int rp=-1;
        for(int i=0;i<lg.size();++i)
        {
            if(i)
                sst-=lg[i-1],sused-=(st[i]-(st[i-1]+lg[i-1]));
            if(i>rp)
                sst+=lg[i],++rp,sused=0;
            while(rp+1<lg.size())
            {
                int dif=(st[rp+1]-(st[rp]+lg[rp]));
                if(sused+dif<=k)
                    sused+=dif,sst+=lg[rp+1],++rp;
                else
                    break;
            }
            sol=max(sol,min(n,sst+k));
        }
    }
    cout<<sol;
    return 0;
}
