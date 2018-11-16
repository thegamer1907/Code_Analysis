#include<iostream>

using namespace std;

int main()
{
        int n, t;
        cin>>n>>t;
        char q[n+1];
        cin>>q;
        int j;
        for(int i=0; i<t; i++, j=0)
        {
            for(j=0; j<n-1; j++)
            {
                if((q[j]=='B')&&(q[j+1]=='G'))
                {
                    q[j]='G';
                    q[j+1]='B';
                    j++;
                }
            }
        }
        
        cout<<q;
        
        return 0;
}