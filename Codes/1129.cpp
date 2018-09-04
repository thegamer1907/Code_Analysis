#include <bits/stdc++.h>

using namespace std;

#define timesaver ios::sync_with_stdio(0);cin.tie(0);
#define loop(n)    for(int i = 0; i < n; i++)
const double EPS = 0.00000001;

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int n, diff;
	cin >> n >> diff;
	vector<pair<int,int> > v(n);
	loop(n)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end());
    long long int fs = 0, cur = 0;
    int l = 0, r = 0;
    while(r < n)
    {
        r = (l>r)? l:r;
        if(v[r].first - v[l].first >= diff)
        {
            cur -= v[l].second;
            ++l;
        }
        else
        {
            cur += v[r].second;
            ++r;
            fs = max(cur,fs);
            //cout << fs << endl;
        }
    }
    cout << fs << endl;
	return 0;
}
