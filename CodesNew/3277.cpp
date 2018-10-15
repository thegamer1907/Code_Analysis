#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,mas[100005],rez;
int main()
{
    std::cin.sync_with_stdio(false);
    std::cin.tie(0);
    cin >> n;
    i=0;
    while (i<n)
    {
        cin >> mas[i];
        i++;
    }
    sort(mas,mas+n);
    rez=mas[n-1];
    i=0;
    while (i<n)
    {
        m+=rez-mas[i];
        i++;
    }
    if (m>=rez)
    {
        cout << rez;
    }
    else
    {
        while (m<rez)
        {
            rez+=1;
            m+=n;
        }
        cout << rez;
    }
    return 0;
}
