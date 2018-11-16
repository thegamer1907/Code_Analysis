#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,x[105],y[105],z[105],sumx=0,sumy=0,sumz=0,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x[i] >> y[i] >> z[i];
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumz=sumz+z[i];
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
