#include <iostream>

using namespace std;

int main()
{
    int n , k ,x ,cnt=0;
    cin>>n>>k;
    for(int i = 1 ; i <=k ;i++)
    {
        cin>>x;
        if(x>0)
            cnt++;

    }
    for(int i = k+1 ; i<=n ;i++)
    {
        int y;
        cin>>y;
        if(y==x && y>0)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
