#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string pass;
    long N;
    cin>>pass>>N;
    bool T=false;
    vector<string> a(N,string());
    for(long i=0;i<N;i++)
    {
        cin>>a[i];
        if (a[i]==pass)
            T=true;
    }
    if(T){cout<<"YES"; return 0;}
    long i1=-1;
    for(long i=0;i<N;i++)
    {
        if(a[i][1]==pass[0])
        {
            i1=i;
            break;
        }
    }
    long j1=-1;
    for(long i=0;i<N;i++)
    {
        if(a[i][0]==pass[1])
        {
            j1=i;
            break;
        }
    }
    if(i1!=-1&&j1!=-1) cout<<"YES";
    else cout<<"NO";
}
