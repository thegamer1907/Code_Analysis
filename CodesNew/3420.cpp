#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int mi=0,x=m,i;
    vector<long long int> v;
    for(i=1;i<=n;i++)
    {
        long long int y;
        cin>>y;
        v.push_back(y);
        if(mi<y)
            mi=y;
    }
    for(i=0;i<n;i++)
    {
        if(m<=0)
        {
            break;
        }
        m-=mi-v[i];
    }
    if(m>0)
    {
        if(m%n==0)
        {
            cout<<mi+(m/n)<<" "<<mi+x;
        }
        else
        {
            cout<<mi+(m/n)+1<<" "<<mi+x;
        }
    }
    else
    {
        cout<<mi<<" "<<mi+x;
    }
    return 0;
}
