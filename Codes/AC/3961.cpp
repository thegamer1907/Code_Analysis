#include <bits/stdc++.h>
using namespace std;
typedef vector<long long> vi;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
        string s;
        cin>>s;
        int cb = 0, cs = 0, cc = 0, nb, ns, nc, pb, ps, pc;
        cin>>nb>>ns>>nc>>pb>>ps>>pc;
        for (int i=0;i<s.size();++i) {
            if (s[i] == 'B') cb++;
            else if (s[i] == 'S') cs++;
            else cc++;
        }
        long long r, low = 0, high = 1e13, mid, cnt = 70;
        cin>>r;
        while (cnt--) {
            mid = (high+low)/2;
            long long fb = nb>cb*mid? 0 : cb*mid-nb;
            long long fs = ns>cs*mid? 0 : cs*mid-ns;
            long long fc = nc>cc*mid? 0 : cc*mid-nc;
            if (r >= fb*pb + fs*ps + fc*pc) {
                low = mid;
            } else {
                high = mid;
            }
        }
        cout<<mid<<"\n";
        return 0;
}