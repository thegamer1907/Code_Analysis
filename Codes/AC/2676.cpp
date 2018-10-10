#include <bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long LL;

const LL M=1e9+7;   ///Should be large primes
const LL base=347;              ///Should be a prime larger than highest value
const int N = 1e6+7;            ///Highest length of string

LL power (LL a, LL p) {
    if (p==0)   return 1;//mp(1,1);
    LL ans = power(a, p/2);
    ans = (ans * ans)%M;
    if (p%2)    ans = (ans*a)%M;
    return ans;
}

LL inverse(LL a)  {
    return power(a, M-1);
}

LL pb[N];      ///powers of base mod M
LL invb;

void hashPre() {
    pb[0] = 1;
    for (int i=1; i<N; i++)
        pb[i] = (pb[i-1] * base)%M;
    invb = inverse(pb[1]);
}

vector<LL> hashList(string s) {
    int n = s.size();
    vector<LL> ans(n+1);
    ans[0] = 0;//mp(0,0);

    for (int i=1; i<=n; i++)
        ans[i] = (ans[i-1] * base + s[i-1])%M;
    return ans;
}

LL substringHash(const vector<LL> &hashlist, int l, int r) {
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
    vector<LL> hl = hashList(s);

    vector<int> lens;

    for (int i=1; i<n; i++)
        if (hl[i] == substringHash(hl, n-i+1, n))
            lens.push_back(i);

    if (lens.size() == 0) {
        cout<<"Just a legend"<<endl;
        return 0;
    }

    int mx = lens.back();

    int ans = 0, l;
    for (int i=2; i<n; i++)
    {
        if (ans >= n-i || ans == mx)    break;
        if (s[i-1] != s[0]) continue;
        int lo = ans, hi = min(mx, n-i);

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
