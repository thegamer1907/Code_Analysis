#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    long long n,k,m,res;
    cin>>n>>k;
    m=pow(2,n-1);
    while(m!=k)
    {
        if (k>m)
        {
            res=k-m;
            k=m-res;
        }
        n--;
        m=pow(2,n-1);
    }
    cout<<n;
    return 0;
}
