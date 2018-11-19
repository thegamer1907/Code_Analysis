#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int>   vi;
typedef vector<long long> vll;
typedef vector<pair<int,int> > vii;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pq priority_queue
#define mii map<int,int>
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
int inf = (1e9) + 7;
int mod = 998244353;


int occ[20];

int main(){


    int n,k;
    sf2(n,k);


    for (int i = 0; i < n; ++i)
    {
        vi v;
        for (int j = 0; j < k; ++j)
        {
            int x;
            sf1(x);
            v.pb(x);
        }
        if(k == 1)
        {
            v.pb(0);
            v.pb(0);
            v.pb(0);
        }
        if(k == 2){   
            v.pb(0);
            v.pb(0);
        }
        if(k == 3)
        {
            v.pb(0);
        }

        int acc = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            acc += v[i] << (3-i);
        }

        occ[acc]++;

    }

    
    if(occ[0])
    {
        printf("YES\n");
        return 0;
    }

    for (int i = 0; i < 20; ++i)
    {
        if(occ[i])
        {
            for (int j = 0; j < 20; ++j)
            {
                if(occ[j]){
                    if((i & j) == 0)
                    {
                        printf("YES\n");
                        return 0;
                    } 
                }
            }
        }
    }
    printf("NO\n");

}