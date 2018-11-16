#include<iostream>

using namespace std;

int main()

{
    int n , k, ar[100] , count = 0, i;
    cin>>n>>k;
    for(i =0 ; i< n ; i++)
    {
        cin>>ar[i];
    }
    for( i =0; i< n ; i++)
    {
        if(ar[i]>0)
        {
        if((ar[i]>=ar[k-1]))
            ++count;
    }}
    cout<<count;
    return 0;
}