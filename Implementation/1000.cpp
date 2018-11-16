#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;
const int maxx = 105;
int x[maxx][5];

int main()
{
    char ss[65];
    int n,t;
    while(cin>>n>>t)
    {
        cin>>ss;
        for(int i=0; i<t; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if (ss[j] == 'B' && ss[j+1] == 'G')
                {
                    swap(ss[j],ss[j+1]);
                    j++;
                }
            }
        }
        cout<<ss<<endl;
    }
    return 0;
}
