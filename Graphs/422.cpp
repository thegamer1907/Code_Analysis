#include <iostream>

using namespace std;

int main()
{
    int n, time;
    cin>>n>>time;
    char studs[n];
    for(int i=0;i<n;i++)
    {
        cin>>studs[i];
    }

    for(int i=0;i<time;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(studs[j]=='B' && studs[j+1]=='G')
            {
                studs[j]='G';
                studs[j+1]='B';
                j++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<studs[i];
    }

}
