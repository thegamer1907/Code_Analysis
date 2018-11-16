#include<bits/stdc++.h>
using namespace std;
int arr[100009];
int main()
{
    int i,j,n,k,l,m;
    char str[100000];
    cin>>str;
    n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            arr[i+1]=arr[i]+1;
        }
        else if(str[i]!=str[i+1])
        {
            arr[i+1]=arr[i]+0;
        }
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>k>>l;
        int ans=arr[l-1]-arr[k-1];
        cout<<ans<<endl;
    }

}
