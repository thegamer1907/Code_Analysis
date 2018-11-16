#include<iostream>
using namespace std;
main(){
    
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    int i,j,k;
    while(--n>=0)
    {
        cin>>i>>j>>k;
        x+=i;
        y+=j;
        z+=k;
    }
    if(x==0&&y==0&&z==0)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
    
}
