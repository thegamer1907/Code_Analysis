#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int n,k;
    cin>>n>>k;
    cin>>a;
    for(int x=0;x<k;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(a[y]=='B' && a[y+1]=='G')
            {
                a[y]='G';
                a[y+1]='B';
                ++y;
            }
        }
    }
    cout<<a;
}