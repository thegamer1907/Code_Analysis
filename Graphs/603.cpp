#include <iostream>
using namespace std;


#include <iostream>
using namespace std;



int main()
{
    int n,t;
    cin>>n>>t;
    string s,q;
    cin>>s;
    string m=s;
    for(int k=0;k<t;k++)
    {
        for(int k=0;k<n;)
        {
        if(s[k]=='B'&&s[k+1]=='G')
        { s[k]='G';
            s[k+1]='B';
            k=k+2;
        }else
            k++;
        }
        
    }
    cout<<s;
}
