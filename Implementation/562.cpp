#include <iostream>

using namespace std;

int main()
{
    int n , k ,x ,y,cnt=0;
    cin>>n>>k;
    for(int i = 1 ; i <=n ;i++)
    {
        cin>>x;
        if(i<k && x)
            cnt++;
        if(i==k && x)
        {
            y=x;
            cnt++;
        }
        if(i>k && x==y && x)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
