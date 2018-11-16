#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<unordered_set>
#include<iostream>
#include <sstream>  // for string streams
#include <string>  // for string
#include<stack>

#define ll long long
#define pb push_back
#define inf (int)1e9
#define f(n) for(ll i=0;i<n;i++)
#define fn(a,n) for(ll a=0; a<n; a++)
#define flr(a,l,r) for(ll a=l; a<=r;a++)
#define mp make_pair
#define p(n) cout<<n<<"\n";

using namespace std;

void pv(std::vector<ll> v) {
    f(v.size()) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



//custom functions

ll check(string s)
{
    ll hash[10] = {0};
    ll flag = 0;
    f(s.length())
    {
        hash[s[i]-'0']++;
        if(hash[s[i]-'0']>1)
            flag = 1;
    }
    if(flag == 1)
        return 0;
    else
        return 1;
}

ll stoll(string s) {}




//custom functions end


int main() {

    //Using text files for input output
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //FastIO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    //start your code here



    ll n, t;
    cin>>n>>t;
    std::vector< std::vector<ll> > v(n+1);
    flr(j, 1, n-1) {
        ll a;
        cin>>a;
        v[j].pb(j+a);

    }

    std::vector<ll> visited(n+1, 0);
    stack<ll> s;
    s.push(1);
    visited[1] = 1;
    while(s.size()) {
        ll x = s.top();
        s.pop();

        for(ll i = 0; i<v[x].size(); i++)
        {
            if(visited[v[x][i]] == 0)
            {
                s.push(v[x][i]);
                visited[v[x][i]] = 1;
            }
        }
    }

    if(visited[t] == 1)
    {
        p("YES");
    }
    else
    {
        p("NO");
    }


    





    

    return 0;
}
