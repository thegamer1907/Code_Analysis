#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n , 0);
    for (int i=0;i<n;i++) cin>>v[i];
    int ma = 0;
    int l = -1 , r = -1 ;
    for (int i =0;i <n;i++)
        for (int j = i;j<n;j++)
    {
        int k1 = 0;
        int k0 = 0;
        for (int vl = i;vl<=j ;vl++)
        {
            if (v[vl])k1++; else k0++;
        }
        if (k0 - k1 > ma)ma = k0 - k1, l = i , r = j;
    }
    if (l == -1 && r == -1)cout<<n-1<<endl;else
    {
        int k = 0 ;
        for (int i = l;i<=r;i++) v[i] = !v[i];
        for (int i=0;i<n;i++)if (v[i])k++;
        cout<<k<<endl;
    }
}
