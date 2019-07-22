#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;


typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<float, float> ff;
typedef vector<ii> vii; 
typedef vector<ff> vff;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    lli n, m, k;
    cin>>n>>m>>k;
    vector<lli> ab(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin>>ab[i];
    }
    
    // for (int &x : ab) { cin >> x; }
    lli start = 0;
    int i = 0;
    lli count = 0;
    while(i < m)
    {
        lli l = ((ceil((ab[i]-start)/(double)k))-1)*k;
        lli r = l+k;
        l+=1;
        int v = 0;
        // cout<<l<<" d f "<<r<<endl;
        while((i<m) && (l<=(ab[i]-start) && (ab[i]-start)<=r)){
            // cout<<"dfasd "<<l<<r<<i<<endl;
            i++;
            v++;
            // cout<<(ab[i]-start)<<endl;
        }
        // cout<<ab[i]<<endl;
        start += v;
        count++;
    }
    cout<<count<<endl;
    return 0;
}