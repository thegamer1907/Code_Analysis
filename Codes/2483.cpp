#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 1;

int cnt [N];
long long how_many [1000001];
vector <int> prime;
bool b [N];

int main (){
  int n,m;

  scanf ("%d",&n);

  for (int i=1; i<=n; ++ i){
    int now;

    scanf ("%d",&now);

    cnt [now] ++;
  }

  scanf ("%d",&m);

  for (int i=2; i<N; ++ i){
    if (b [i]) continue;

    int st = i;
    int p = prime.size ();

    prime.push_back (i);

    while (st < N) b [st] = 1,how_many [p] += 1ll * cnt [st],st += 1ll * i;
  }

  //for (int i=0; i<10; ++ i)
  //  cout <<prime [i] <<" ";
  //cout <<endl;

  int nn = prime.size () - 1;

  for (int i=1; i<=nn; ++ i)
    how_many [i] += how_many [i - 1];

  for (int i=1; i<=m; ++ i){
    int l,r;

    scanf ("%d%d",&l,&r);

    int ll = lower_bound (prime.begin (),prime.end (),l) - prime.begin ();
    int rr = upper_bound (prime.begin (),prime.end (),r) - prime.begin () - 1;

    if (ll > rr) { printf ("0\n"); continue; }

    long long ans = how_many [rr];

    if (ll > 0) ans -= how_many [ll - 1];

    printf ("%I64d\n",ans);
  }
  return 0;
}
