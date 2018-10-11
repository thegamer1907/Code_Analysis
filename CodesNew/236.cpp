#include <iostream>

using namespace std;

int main()
{
    int n,timp;
    cin>>n;
    cin>>timp;
    int a[n];
    int sc=0,j=0,lmax=0;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    sc=sc+a[i];
    while (j<=i && sc>timp)
        {
        sc=sc-a[j];
        j++;
        }
    if(i-j+1>lmax)
        lmax=i-j+1;
    }
    cout<<lmax;


    return 0;
}
