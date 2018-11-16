#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <utility>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n,a,b;

    cin>>n>>a>>b;

    a--;
    b--;

    int i=0;

    while(true)
    {
        i++;
        a/=2;
        b/=2;
        n/=2;
        if(a==b)
        {
            break;
        }
    }

    if(n==1)
    {
        cout<<"Final!";
    }
    else
    {
        cout<<i;
    }

    return 0;
}
