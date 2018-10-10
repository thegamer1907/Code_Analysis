#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i,x=0;
    double d=0;
    cin>>n>>l;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);


    if(arr[0]==0&&arr[n-1]==l)
    {
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]>x)
                x=arr[i+1]-arr[i];
        }
        d=(double)x/2;
        cout<< fixed << setprecision(10)<< d << "\n";
    }
    else
    {

        if(n>1)
        {
            for(i=0; i<n-1; i++)
            {
                if(arr[i+1]-arr[i]>x)
                    x=arr[i+1]-arr[i];
            }
            d=(double)x/2;
            if(arr[0]>d)
                d=(double)arr[0];
            if(l-arr[n-1]>d)
                d=(double)(l-arr[n-1]);
            cout<< fixed << setprecision(10)<< d << "\n";
        }
        else{

                if(arr[0]>d) d=(double)arr[0];
                if(l-arr[0]>d) d=(double)(l-arr[0]);
            cout<< fixed << setprecision(10)<< d << "\n";
        }
    }
}
