#include <iostream>

using namespace std;

int main()
{
    int n,k,a=0;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]>=c[k-1]&&c[i]>0)
            a+=1;
    }
    cout<<a;
    return 0;
}
