#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,x=0,y=0;
    string p,s1;
    cin>>p>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1;
        if( (s1[0] == p[1] && s1[1] == p[0]) || (s1[0] == p[0] && s1[1] == p[1]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(p[0] == s1[1])
	        x=1;
        if(p[1] == s1[0])
	        y=1;
    }
    if(x == 1 && y == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}