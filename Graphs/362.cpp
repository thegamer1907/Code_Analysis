#include<iostream>
using namespace std;
int main()
{
    int x,n;
    char bg[100];
    cin>>x>>n;
    for(int i=0;i<x;i++)
    cin>>bg[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(bg[j]=='B'&& bg[j+1]=='G')
            {
                bg[j]='G';
                bg[j+1]='B';
                j++;
            }
        }
    }
    for(int i=0;i<x;i++)
    cout<<bg[i];
return 0;    
}