#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[100001];
    for(int i=1;i<n;i++)
        cin>>a[i];
    int pnt=1;
    while(pnt<n)
    {
        pnt+=a[pnt];
        if(pnt==m)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
