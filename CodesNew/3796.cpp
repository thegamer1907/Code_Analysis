#include <iostream>

using namespace std;

int main()
{
    long long n,total=0,x,maximo=0;
    cin>>n;
    for (long long c=0;c<n;c++)
    {
        cin>>x;
                maximo=max(maximo,x);
        total +=x;
    }
    n--;
    if (total%n==0) cout<<max(maximo,total/n)<<endl;
    else cout<<max(maximo,total/n+1)<<endl;
    return 0;
}
