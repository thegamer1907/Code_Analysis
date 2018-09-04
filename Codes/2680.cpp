#include <bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;

const PLL M=mp(1e9+7, 1e9+9);   ///Should be large primes
const LL base=347;              ///Should be a prime larger than highest value
const int N = 1e6+7;            ///Highest length of string

PLL operator+ (PLL a, LL x)     {return mp(a.ff + x, a.ss + x);}
PLL operator- (PLL a, LL x)     {return mp(a.ff - x, a.ss - x);}
PLL operator* (PLL a, LL x)     {return mp(a.ff * x, a.ss * x);}
PLL operator+ (PLL a, PLL x)    {return mp(a.ff + x.ff, a.ss + x.ss);}
PLL operator- (PLL a, PLL x)    {return mp(a.ff - x.ff, a.ss - x.ss);}
PLL operator* (PLL a, PLL x)    {return mp(a.ff * x.ff, a.ss * x.ss);}
PLL operator% (PLL a, PLL m)    {return mp(a.ff % m.ff, a.ss % m.ss);}

PLL power (PLL a, LL p) {
    if (p==0)   return mp(1,1);
    PLL ans = power(a, p/2);
    ans = (ans * ans)%M;
    if (p%2)    ans = (ans*a)%M;
    return ans;
}

PLL inverse(PLL a)  {
    return power(a, (M.ff-1)*(M.ss-1)-1);
}

PLL pb[N];      ///powers of base mod M
PLL invb;

void hashPre() {
    pb[0] = mp(1,1);
    for (int i=1; i<N; i++)
        pb[i] = (pb[i-1] * base)%M;
    invb = inverse(pb[1]);
}

vector<PLL> hashList(string s) {
    int n = s.size();
    vector<PLL> ans(n+1);
    ans[0] = mp(0,0);

    for (int i=1; i<=n; i++)
        ans[i] = (ans[i-1] * base + s[i-1])%M;
    return ans;
}

PLL substringHash(const vector<PLL> &hashlist, int l, int r) {
    int len = (r-l+1);
    return ((hashlist[r] - hashlist[l-1]*pb[len])%M+M)%M;
}

int main()
{
    srand(time(NULL));
    ios::sync_with_stdio(0);
    cin.tie(0);
    hashPre();

    string s;
    cin>>s;
    int n = s.size();
    vector<PLL> hl = hashList(s);

    vector<int> lens;

    for (int i=1; i<n; i++)
        if (hl[i] == substringHash(hl, n-i+1, n))
            lens.push_back(i);

    int ans = 0, l;
    for (int i=2; i<n; i++)
    {
        if (ans >= n-i)    break;
        if (s[i-1] != s[0]) continue;
        if (hl[ans+1] != substringHash(hl, i, i+ans))   continue;
        int lo = ans+1, hi = n-i;

        while (lo < hi)
        {
            int mid = (lo + hi + 1)/2;
            if (hl[mid] == substringHash(hl, i, i+mid-1))
                lo = mid;
            else hi = mid - 1;
        }

        if (lo == ans)  continue;
        //cout<<i<<" "<<lo<<endl;
        auto it = upper_bound(lens.begin(), lens.end(), lo);
        if (it == lens.begin()) continue;
        int cur = *(--it);
        if (ans < cur)
            ans = cur, l = i;
    }
    if (ans == 0)   {cout<<"Just a legend"<<endl;}
    else cout<<string(s.begin()+l-1, s.begin() + l-1 + ans)<<endl;
}
