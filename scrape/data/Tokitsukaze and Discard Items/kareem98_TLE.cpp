#include <bits/stdc++.h>

using namespace std;

long long n, m, x, y, w, t, z, k, a[100500];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> w;
	for (int i = 0; i < m; ++i) cin >> a[i];
	sort(a,a+m);
	while (k < m)
    {
        long long i = ceil((double)(a[k]-t)/w);
        while(a[k] <= i*w+t && k < m){
            while(a[k] <= i*w+t && k < m)
                ++k;
            t = k, ++y;
        }
    }
    cout << y;
}