#include<bits\stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(i!=n-1 && a[i+1]!=b[i+1] && a[i]!=a[i+1])
            {
                swap(a[i], a[i+1]);
                ans++;
            }
            else
            {
                a[i] = b[i];
                ans++;
            }
        }
    }
    cout << ans << endl;
}
