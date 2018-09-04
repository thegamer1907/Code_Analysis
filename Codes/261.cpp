#include <iostream>
using namespace std;
const int N = 1000000;
int array[N];
int main()
{
    int n,m;
    int a,q;
    int k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            array[++k]=i;
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>q;
        cout<<array[q]<<endl;
    }
    return 0;
}