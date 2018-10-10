#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    long long n, k, ans(0);
    cin >> n >> k;
    vector <long long> a(n);
    map <long long, long long> l, r;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        r[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        r[a[i]]--;
        if(a[i] % k == 0)
            ans += l[a[i] / k] * r[a[i] * k];
        //cout << a[i] << " " << l[a[i] / k] * r[a[i] * k] << endl;
        l[a[i]]++;
    }
    cout << ans;
}
