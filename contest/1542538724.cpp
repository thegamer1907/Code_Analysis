#include <iostream>

using namespace std;

int main()
{
    int n;
    bool w = false;
    string a;
    cin>>a;
    cin>>n;
    string arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
        if(arr[i] == a)
        {
            cout<<"YES";
            return 0;
        }
    }
    for(int i =0;i < n;i++)
    {
        if(arr[i][1] == a[0])
        {
            w =true;
        }
    }
    if ( w == true)
    {
        w = false;
        for(int i =0;i < n;i++)
        {
            if(arr[i][0] == a[1])
            {
                w =true;
            }
        }
    }
    if (w == true) cout<<"YES";
    else
    cout<<"NO"<<endl;
    return 0;
}


