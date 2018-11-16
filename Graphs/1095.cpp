#include<iostream>
using namespace std;

int main()
{

    long n,t,next_pos,cur_pos=1,f=0;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        cin>>next_pos;
        if(cur_pos==i && f==0)
        {
            cur_pos+=next_pos;
            if(cur_pos==t)
                f=1;
        }

    }
    if(f==1)
         cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
