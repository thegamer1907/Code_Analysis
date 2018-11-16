#include<iostream>
using namespace std;

int main()
{
        int n,t,flag;
        cin>>n>>t;
        char A[n];
        for(int i=0;i<n;++i)
                cin>>A[i];
        for(int j=0;j<t;++j)
        {
                for(int i=0;i<n-1;)
                {
                        flag=0;
                        if(A[i]=='B' && A[i+1]=='G')
                                {
                                        A[i]='G';
                                        A[i+1]='B';
                                        i+=2;
                                }
                        else
                                ++i;
                }
        }
        for(int i=0;i<n;++i)
                cout<<A[i];
        return 0;
}