#include<bits/stdc++.h>
using namespace std;
int aa[105];
int main()
{
    int n,cont=0,cont2=0,temp=0;
    cin >> n;
    for(int i=0; i<n; i++)cin >> aa[i];
    for(int i=0; i<n; i++)
    {
        if(aa[i]==1)
        {
            cont++;
            if(cont2!=0)cont2--;
        }
        else
        {
            cont2++;
            if(cont2>temp)
            {
                temp=cont2;
            }
        }
    }
    if(cont==n)cout << cont-1 << endl;
    else cout << cont+temp << endl;
}
