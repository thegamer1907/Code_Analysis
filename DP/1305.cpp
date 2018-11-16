#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,cnt = 0, sum1=0, summin = -1;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a==1)
        {
            cnt +=1;

            if(sum1>0)
            {
                sum1 -=1;
            }
        }
        else {
            sum1 +=1;
                    if(sum1> summin)
            {
                summin = sum1;
            }

        }
    }
    cout << cnt + summin << endl;
    return 0;
}
