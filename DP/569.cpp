#include<bits/stdc++.h>
using namespace std;
#define N 100000
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int q;
    cin>>q;
    int arr[n+1];
    arr[0]=0;
    arr[1]=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            arr[i+1]=arr[i]+1;
        }
        else
        {
            arr[i+1]=arr[i];
        }
    }
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l]<<endl;
    }
}
