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
            vi v(4);
            vi aux;
            int x = i;

            while(x > 0){
                aux.pb(x%2);
                x /= 2;
            }
            if(i < 8){
                aux.pb(0);
            }
            if(i < 4)
                aux.pb(0);
            if(i < 2)
                aux.pb(0);
            if(i < 1)
                aux.pb(0);
            for (int h = 0; h < 4; ++h)
            {
                v[3-h] = aux[h];
            }
            for (int j = 0; j < 20; ++j)
            {
                if(occ[j]){
                    vi v2(4);
                    vi aux;
                    x = j;

                    while(x > 0){
                        aux.pb(x%2);
                        x /= 2;
                    }
                    if(i < 8){
                        aux.pb(0);
                    }
                    if(i < 4)
                        aux.pb(0);
                    if(i < 2)
                        aux.pb(0);
                    if(i < 1)
                        aux.pb(0);
                    for (int h = 0; h < 4; ++h)
                    {
                        v2[3-h] = aux[h];
                    }
                    for (int h = 0; h < 4; ++h)
                    {
                        int r = v[h] + v2[h];
                        if(r > 1) break;
                        if(h == 3)
                        {

                            printf("YES\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("NO\n");

}