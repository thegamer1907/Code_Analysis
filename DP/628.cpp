#include <bits/stdc++.h>

typedef long long lli;

using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    lli cum[n];
    lli sum = 0;
    cum[0] = 0;
    for(int i =1; i<n;i++)
    {
        if(str[i] == str[i-1])
        {
            sum++;
            cum[i] = sum;
        }
        else
        {
            cum[i] = sum;
        }
    }
    int q;
    cin >> q;
    lli ans[q];
    for(int i=0; i<q;i++)
    {
        int low,up;
        cin >> low >> up;
        ans[i] = cum[up-1] - cum[low-1];
    }
     for(int i=0; i<q;i++)
    {
        cout << ans[i]<< endl;
    }
    return 0;
}









