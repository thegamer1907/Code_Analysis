#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int n,k,x;
    cin>>n>>k;
    bool flag = false;
    vector<int> cnt(1<<(k+1),0);
    for(int i=0;i<n;i++)
    {
        int a=0;
        for(int j=0;j<k;j++)
        {
            cin>>x;
            a+=x<<j;
        }
        cnt[a]++;
    }
    for(int i = 1 ; i< 1<<(1<<(k)); i++)
    {
        vector<int> c(k);
        int sum=0;
        bool poss = true;
        for(int j = 0; j<(1<<k); j++)
        {
            if((i&(1<<j)) && (cnt[j]==0))
            {
                poss = false; 
                break; 
            }
        }
        if(!poss)
            continue;
        for(int j = 0; j<(1<<k); j++)
        {
            if(i&(1<<j))
            {
                sum++;
                for(int l=0;l<k;l++)
                    if(j&(1<<l))
                        c[l]++;
            }
        }
        flag = true;
        for(int j=0;j<k;j++)
        {
            if(2*c[j]>sum)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}