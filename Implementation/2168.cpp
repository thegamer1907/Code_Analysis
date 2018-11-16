#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,a[1000][3],d=0;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        for (j=1;j<=3;j++)
        {
            cin >> a[i][j];
        }
    }
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=n;j++)
        {
            d+=a[j][i];
        }
        if (d!=0)
        {
        	cout << "NO";
        	return 0;
		}
    }
    cout << "YES";
}