#ifdef LOCAL_TEST
  #include "/usr/local/include/bits/stdc++.h"
  #pragma comment(linker, "/stack:16777216")
#endif
#ifndef LOCAL_TEST
  #include <bits/stdc++.h>
#endif

using namespace std;

typedef long long int ll;
typedef vector <ll> vll;
typedef pair<ll, ll> pp;
typedef vector<pp > vpp;
typedef vector <int> vi;
typedef stack <int>  si;
typedef stack <ll> sll;
typedef stack < pair<int, int> > sii;
typedef queue < pair<int, int> > qii;

#define sz(a) ll((a).size())
#define pb push_back
#define all(c)        (c).begin(),(c).end()
#define tr(c,i)       for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x)  ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define mp(a, b)       (make_pair(a, b) )
#define sortA(v)      (sort(v.begin(), v.end()))
#define sortD(v)      (sort(v.rbegin(), v.rend()))
#define fill(a)       (memset(a, 0, sizeof (a)))
#define end '\n'
#define PI 3.14159265

// Functions
ll gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}
ll abs(ll a, ll b){
  if( a > b)
    return a-b;

  return b-a;
}
double abs(double a, double b){
  if( a > b)
    return a-b;

  return b-a;
}

ll cb = -1, cs = -1, cc = -1;
ll pb, ps, pc;
ll nb, ns, nc;
ll r;

ll binarysearch(ll s, ll e)
{
  ll m = (s+e)/2;

  ll cost = 0;

  if(m*cb > nb)
  {
    cost += pb*(m*cb - nb);
  }
  if(m*cs > ns)
  {

      cost += ps*(m*cs - ns);
  }
  if(m*cc > nc)
  {

      cost += pc*(m*cc - nc);
  }

  ll cost2 = 0;
  if((m+1)*cb > nb)
    cost2 += pb*((m+1)*cb - nb);
  if((m+1)*cs > ns)
    cost2 += ps*((m+1)*cs - ns);
  if((m+1)*cc > nc)
    cost2 += pc*((m+1)*cc - nc);

  // cout << s << ", " << m << ", " << e << ",, " << cost << ", " << cost2 << '\n';

  if(cost == r)
  {
    return m;
  }
  else if (cost < r && cost2 > r) {
    return m;
  }
  else if(cost < r)
  {
    return binarysearch(m+1, e);
  }

  return binarysearch(s, m);

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifdef LOCAL_TEST
		  ifstream cin("in.txt"); ofstream cout("out.txt");
    #endif
// 1 000 000 000 001
//   200 000 000 001 //supposed to be answer
// 1 000 000 000 000
// 1 499 999 999 997
//
//   749 999 999 997//cost for
//   250 000 000 000

    string s; cin >> s;
    for (size_t i = 0; i < s.size(); i++) {
      if(s[i] == 'B')
        cb++;
      if(s[i] == 'S')
        cs++;
      if(s[i] == 'C')
        cc++;
    }
    if(cb != -1)
    {
      cb++;
    }
    if(cs != -1)
    {
      cs++;
    }
    if(cc != -1)
    {
      cc++;
    }


    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    // cout << nb << ns << nc << end;

    ll e = max(max((nb+ r/pb)/cb , (ns + r/ps)/cs), (nc+ r/pc)/cc);

    if(cb == -1)
    {
      cb = 0;
    }
    if(cs == -1)
    {
      cs = 0;
    }
    if(cc == -1)
    {
      cc = 0;
    }
    cout << binarysearch(0, e) << end;



    return 0;
}
