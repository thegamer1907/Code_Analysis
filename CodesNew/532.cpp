#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long ll;

const int MAXN = 1e7 + 3;
vector<int> pr;
int P[MAXN],cnt[MAXN], f[MAXN], acum[MAXN];

void sieve(){
    for(int i = 2; i < MAXN; i++)
    {
      if(!P[i])P[i] = i,pr.emplace_back(i);
       for(int p: pr)
       {
         if(1LL*p*i>=MAXN)break;
         P[p*i] = p;
         if(i%p==0)break;
       }
    }
}

void fact(int a){
     int m = a;
     while(P[m]){
        int ax = P[m];
        while(P[m]==ax)m/=P[m];
     }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    sieve();

    int n;cin >> n;
    for(int i = 0; i < n; i++){
            int x;cin >> x;
            cnt[x]++;
    }

    for(int p : pr){
        for(int j = p; j < MAXN; j+=p)f[p]+=cnt[j];
    }

    for(int i = 1; i < MAXN; i++){
        acum[i] += (acum[i - 1] + f[i]);
    }


    int q;cin >> q;
    while(q--){
        int li,ri;cin >> li >> ri;
        if(li>1e7)cout << 0 << endl;
        else {
            cout << acum[min(ri, 10000000)] - acum[li - 1] << endl;
        }
    }

    return 0;
}
