#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int nr=18,scifre,copie;
    int k,curent=0;
    cin>>k;
    while (curent<k)
    {
        copie=nr;
        scifre=0;
        while (copie>0)
        {
            scifre+=copie%10;
            copie/=10;
        }
        if (scifre==10)
            curent++;
        if (curent==k)
            cout<<nr;
        nr++;
    }
    return 0;
}
