#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    

    char c;
    c=getchar();

    int arr[100090]={0};
    int k=1,count=0;
    while(1)
    {

        char temp = c;
        c=getchar();
        if(c==10)break;
        k++;
        if(temp==c)
        {
           count++;

        }
        arr[k]=count;

    }

    ///for(int i=0;i<=k;i++)cout<<arr[i]<<endl;
    ///return 0;

    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l]<<endl;
    }
}
