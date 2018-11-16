#include <iostream>

using namespace std;

int main()
{
    short int n,k,tedad=0;
    cin>>n>>k;
    short int a[n];
    for (int i=0 ; i<n ; i++)
        cin>>a[i];
    for (int i=0 ; i<n ; i++)
    {
        if(a[i]>0 && i<k)
        {
            tedad++;
        }
        if(i>=k && a[i]==a[k-1] && a[i]!=0)
            tedad++;
    }
    cout<<tedad;
    return 0;
}
