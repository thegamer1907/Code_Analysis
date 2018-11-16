#include<iostream>
using namespace std;
int main()
{
    int n,t;
    string A;
    cin>>n>>t;
    cin>>A;
    while (t--)
    {
        for(int i=0;i<n-1; i++)
        {
            if(A[i]=='B'&&A[i+1]=='G')
            {
                char temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                i++;
            }
        }

    }
    cout <<A;
}
