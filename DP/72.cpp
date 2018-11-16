#include<iostream>
#include <algorithm>

using namespace std;
#define MAXN 105
int boys[MAXN];
int girls[MAXN];
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>boys[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>girls[i];
    }
    sort(boys,boys+n);
    sort(girls,girls+m);
    int j=0,i=0,count=0;
    while(i<n)
    {
        if(abs(boys[i]-girls[j])<=1)
        {
            girls[j]=-1;
            i++;
            j++;
            count++;
        }
        else
        {
            j++;
        }
        if(j==m)
        {
            j=0;
            i++;
        }
    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<boys[i]<<" ";
//    }
//    cout<<endl;
//    for(int j=0;j<m;j++)
//    {
//        cout<<girls[j]<<" ";
//    }
//    cout<<endl;
    cout<<count;
}

