#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    int arr[16];
    for(int i=0;i<16;i++)
        arr[i]=0;
    
    for(int i=0;i<n;i++)
    {   int l=0;
        for(int j=k-1;j>=0;j--)
        {
            int a;
            cin >>a;
            l+=pow(2,j)*a;    
        }
//        cout << l<<endl;
        arr[l]=1;
    }
    int flag=0;
    if(arr[0]==1)
        flag=1;
    for(int i=0;i<16;i++)
    {
        for(int j=1;j<16;j++)
            if(arr[i]==1 && arr[j]==1)
            {
              //  cout << i<<j<<endl;
                if((i & j) == 0)
                   flag=1;
            }
    }

    if(flag==1)
        cout <<"Yes"<<endl;
    else
        cout <<"No"<<endl;
}
