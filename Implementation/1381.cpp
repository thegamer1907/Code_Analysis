#include <iostream>
using namespace std;

int main()
{
    string s;
    int n,t;
    cin>>n>>t>>s;
    //cout<<n<<" "<<t<<" "<<s<<"\n";
    s[n]='\0';
    
    while(t>0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    t--;
    }
    cout<<s;
}
