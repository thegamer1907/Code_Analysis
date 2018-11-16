#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,k,arr[100],count=0;

    cin>>size>>k;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }

    for(int i=0;i<size;i++)
        {


             if(arr[i]>=arr[k-1] && arr[i]!=0)
            {
                count++;
            }
        }


   cout<<count<<endl;


}