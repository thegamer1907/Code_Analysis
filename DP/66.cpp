#include<bits/stdc++.h>
using namespace std;
int m,n,a[100],b[100];
int arr[101][101];
int diff(int i,int j)
{
    if(i==j || i==j+1 || i+1 == j)
    return 1;
    return 0;
}
int answ(int aa,int bb)
{
    if(aa<0 || bb<0) return 0;
    if(arr[aa][bb]!=-1) return arr[aa][bb];
    arr[aa][bb]=max(max(answ(aa-1,bb),answ(aa,bb-1)),answ(aa-1,bb-1)+diff(a[aa],b[bb]));
    return arr[aa][bb];
}
int main()
{
    for(int i=0;i<101;i++)
        for(int j=0;j<101;j++)
        arr[i][j]=-1;
    

    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)
    cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    

    cout<<answ(n-1,m-1)<<endl;




    return 0;
}