#include <bits/stdc++.h>
using namespace std;

int clockdist(int x, int y)
{
    int a[25] = {0};
    for(int i = 0; i<=12; i++)
        a[i] = i;
    for(int i = 13; i<=24; i++)
        a[i] = i%12;
    a[24] = 12;

    int k = 0, i = x;
    while(y!=a[i])
    {
        i++;
        k++;
    }

    return k;
}


int main()
{
    //freopen("in.txt", "r", stdin);

    int a[25] = {0};
    int h, m, s, t1, t2, l1, l2;

    cin>>h>>m>>s>>t1>>t2;

    l1 = clockdist(t1, t2);
    l2 = clockdist(t2, t1);

    a[h+12] = 1, a[h] = 1;
    a[m/5] = 1, a[m/5+12] = 1;
    a[s/5] = 1, a[s/5+12] = 1;

    int flag = 0;

    for(int i = t1, k = 1; k<=l1; k++,i++)
    {
        if(a[i]==1)
            flag = 1;
            //cout<<i<<" "<<a[i]<<endl;
    }

    if(flag==0)
    {
        cout<<"YES";
        return 0;
    }

    flag = 0;

    for(int i = t2, k = 1; k<=l2; k++,i++)
    {
        if(a[i]==1)
            flag = 1;
        //cout<<i<<" "<<a[i]<<endl;
    }

    if(flag)
        cout<<"NO";
    else
        cout<<"YES";

}
