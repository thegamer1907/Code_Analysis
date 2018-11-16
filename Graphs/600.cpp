#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;

    int n,t,i;

    char temp;

    cin>>n>>t;

    cin>>arr;

    while(t>0)
    {
        for(i=0;i<arr.size();i++)
        {
            if(arr[i-1]=='B'&&arr[i]=='G')
            {
               temp= arr[i];
               arr[i]=arr[i-1];
               arr[i-1]=temp;
               i++;
            }
        }
        t--;
    }

    cout<<arr;

    return 0;
}