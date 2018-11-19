#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int m;
    cin>>m;
    string w[m];
    for(int i=0;i<m;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<m;i++)
    {
        if(w[i]==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            string v=w[i]+w[j];
            if(v[1]==n[0]&&v[2]==n[1])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}