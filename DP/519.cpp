#include <bits/stdc++.h>
using namespace std;
int main()
{
    //INPUT
    string s;
    cin >> s;
    int n=s.size(),a[n];
    a[0]=0;
    for(int i=1;i<n;i++)
    {
        a[i]=a[i-1];
        if(s[i]==s[i-1])
        {
            a[i]++;
        }
    }
    int q;
    cin >> q;
    int l[q],r[q];
    for(int i=0;i<q;i++)
    {
        cin >> l[i] >> r[i];
    }
    //SOLVE
    for(int i=0;i<q;i++)
    {
        cout << a[r[i]-1]-a[l[i]-1] << endl;
    }
}
