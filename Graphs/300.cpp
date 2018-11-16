#include <iostream>

using namespace std;

int main()
{
    int n, t, i, j;
    cin>>n>>t;
    string q;
    cin>>q;

/*
5 1
BGGBG
*/
    for(i=1; i<=t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(q[j]=='B' && q[j+1]=='G')
            {
                q[j]='G', q[j+1]='B', j++;  // GBGGB GGBGB
            }
        }
    }

    cout<<q<<endl;

}
