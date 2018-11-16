#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x[t];
    int y[t];
    int z[t];
    int sum_x=0,sum_y=0,sum_z=0;
    for(int i=0;i<t;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0)
        cout<<"YES";
    else
        cout<<"NO";
}
