#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
#define pb push_back

vector<int> v;
int n;

int main()
{
    FASTER;
    cin >> n;
    v.resize(n);

    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int idx=(n+1)/2 -1, cnt=0;
    for(int i=0; i<(n+1)/2 and idx<n-1; i++)
    {
        int k = lower_bound(v.begin()+1+idx, v.end(), 2*v[i])-v.begin();
        if(k<n)
            cnt++, idx=k;
    }

    cout << n-cnt;
    return 0;
}
