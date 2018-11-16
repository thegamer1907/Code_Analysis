#include <iostream>
#include <algorithm>
using namespace std;
int boy[1000009],girl[1000009],n,m,ctr;
int main()
{
    cin >> n;

    for (int i=1;i<=n;i++)
        cin >> boy[i];

    cin >> m;

    for (int i=1;i<=m;i++)
            cin >> girl[i];

    sort (girl , girl+m+1);
    sort (boy, boy+n+1);


        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++)
                    if (((girl[j]<=boy[i] && boy[i]-girl[j]<=1) || (girl[j]>=boy[i] && girl[j]-boy[i]<=1))&& (boy[i]!=0 && girl[j]!=0)) {
                        girl[j]=0;
                        boy[i]=0;
                        ctr++;
                        break;
                    }
            }
            cout << ctr;







    return 0;
}
