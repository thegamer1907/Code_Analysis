#include<iostream>
using namespace std;

main()
{
    int i,*arr,n,t,x;

    cin>>n>>t;

    arr = new int[n];

    for(i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

    x = 1;

    while(x <= t)
    {
        if(x == t)
            {
                cout<<"YES";
                break;
            }

        else
        {
            x += arr[x-1];

            if(x > t)
            {
                cout<<"NO";
                break;
            }
        }

    }

}
