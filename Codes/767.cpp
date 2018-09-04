#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;





int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;

    int q=0;

    int i;

    for(i=1;q<n;i++)
    {
        int a=i;
        int S=0;
        while(a>0)
        {
            S+=(a%10);
            a/=10;
        }
        if(S==10)
        {
            q++;
            if(q==n)
            {
                break;
            }
        }
    }

    cout<<i;

    return 0;
}

