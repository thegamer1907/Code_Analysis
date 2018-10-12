#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<str>


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i,j,k,sqn,q;
    cin>>n>>q;
    sqn = sqrt(n);
    ll soldiers[200005];
    ll query;
    
    for(i=0; i<n; i++)
    cin>>soldiers[i];
    
    ll dp[200005];

    dp[0] = soldiers[0];
    for(i=1; i<sqn; i++)
        dp[0] += soldiers[i];

    for(i=1; i<=n-sqn; i++)
        dp[i] = dp[i-1] - soldiers[i-1] + soldiers[i+sqn-1];

    for(i=n-sqn+1; i<n; i++)
        dp[i] = dp[i-1] - soldiers[i-1];

    // cout<<"sqn = "<<sqn<<endl<<"dp = ";
    // for(i=0; i<n; i++)
    //     cout<<dp[i]<<" ";
    // cout<<endl;

    int sol_index = 0;
    ll health = soldiers[sol_index];

    // cout<<sol_index<<" "<<health<<endl;
    for(i=0; i<q; i++)
    {
        cin>>query;

        if(query < health)
        {
            health-=query;
            cout<<n-sol_index<<endl;
        }
        else
        {
            query -= health;
            sol_index++;

            while(sol_index < n && query > 0)
            {
                if(dp[sol_index] > query)
                    break;
                else
                {
                    query -= dp[sol_index];
                    sol_index = min(sol_index+sqn, n);
                }
            }
            if(sol_index != n) 
            health = soldiers[sol_index];

            while(sol_index < n && query > 0)
            {
                if(soldiers[sol_index] <=query)
                {
                    query -= soldiers[sol_index];
                    sol_index++;
                    if(sol_index != n)
                        health = soldiers[sol_index];
                }
                else
                {
                    health -= query;
                    query = 0;
                }
            }

            if(sol_index == n)
            {
                sol_index = 0;
                health = soldiers[sol_index];
            }
            // cout<<sol_index<<" "<<health<<endl;
            cout<<n-sol_index<<endl;
        }  
    }  
    return 0;
}