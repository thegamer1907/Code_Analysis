#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,bk=0,kk=0,sh=0;
    cin >> n;
    cin >> m;
    int b[n];
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        if(t>sh)
            sh = t;
        b[i]=t;
    }
    bk = m + sh;
    for(int i = 0;i<n;i++)
    {
        while(b[i]<sh && m > 0)
        {
            b[i]++;
            m--;
        }
        if(m==0)
        {
            kk = sh;
            break;
        }
    }
    int i = 0;
    while(m>0)
    {
        b[i] ++;
        m --;
        if(i<n-1)
            i++;
        else
            i=0;
        kk = b[0];
    }
    cout << kk << " " << bk;
    return 0;
}
