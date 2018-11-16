#include<iostream>

using namespace std;

main()
{
    int n, x=0, y=0, z=0, v;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        x+=v;
        cin>>v;
        y+=v;
        cin>>v;
        z+=v;
    }
    if(x ==0 && y ==0 && z ==0)
        cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}
