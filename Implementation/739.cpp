#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    int c=0;
    while(c!=x)
    {
        int i=0;
       while(i<n)
        {
            if(s[i]=='B')
            {
                if(s[i+1]=='G')
                {
                    swap(s[i],s[i+1]);
                    i=i+2;
                  //  cout<<"hello";
                }
                else
                {

                    i++;
                    //cout<<"hello";
                }
            }
            else
            {

                i++;
                //cout<<"hello";
            }
        }
        c++;
    }
    cout<<s;
    return 0;
}
