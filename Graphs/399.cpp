#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    char Q[n];
    cin>>Q;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++){
            if(Q[j]=='B' && Q[j+1]=='G'){
                Q[j]='G';
                Q[j+1]='B';
                j++;
            }
        }
    }
    cout<<Q;
    return 0;
}
