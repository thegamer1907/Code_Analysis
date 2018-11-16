#include <iostream>

using namespace std;

int main()
{
    int n, t, i, j;
    cin>>n>>t;
    string q;
    cin>>q;

    for(i=1; i<=t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(q[j]=='B' && q[j+1]=='G')
                q[j]='G', q[j+1]='B', j++;
        }
    }

    cout<<q<<endl;

    return 0;
}
