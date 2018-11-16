#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i,angka;
    int temp = -1;
    int cnt = 0;
    int maxi = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&angka);
        if(angka > temp)
        {
            cnt++;
            temp = angka;
        }
        else
        {
            cnt = 1;
            temp = angka;
        }
        maxi = max(cnt,maxi);
    }
    printf("%d\n",maxi);
    return 0;
}
