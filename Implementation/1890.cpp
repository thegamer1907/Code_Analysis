/*
3
0 2 -2
1 -1 3
-3 0 0

NO
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, p, sum1=0, sum2=0, sum3=0;
    cin>>n;
    int ara[3];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>p;
            if(j%3==2)
            {
                sum1+=p;
            }
            else if(j%3==1)
            {
                sum2+=p;
            }
            else
            {
                sum3+=p;
            }
        }
    }

    if(sum1==0 && sum2==0 && sum3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
