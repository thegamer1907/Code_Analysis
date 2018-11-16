#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int t1=0, t2=0, t3=-1;
    for(int i=0; i<n; i++)
    {

        cin >> a;
        if (a)
        {
            t1++;
            if(t2)
                t2--;
        }
        else
        {
            t2++;
            if (t2>t3)
            {
                t3=t2;
            }
        }
    }
    cout <<t1+t3<<endl;
    return 0;
}