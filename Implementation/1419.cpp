#include<iostream>
using namespace std;
int main(void)
{
    int n,t,i,j,flag=0;
    char arr[51],temp;
    cin>>n>>t;
    cin>>arr;
    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]=='B' && arr[i+1]=='G')
            {
                arr[i]='G'; 
                arr[i+1]='B';
                flag=1;
            }
            if(flag==1)
            {
                flag=0;
                i++;
            }
        }
    }
    cout<<arr<<endl;
    return 0;
}