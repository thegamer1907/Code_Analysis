#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n, kts = 0, ktt = 0;
    cin>>n;
    
    while(n--)
    {
        string s1;
        cin>>s1;
        
        if(s1.compare(s) == 0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s1[1] == s[0])
            ktt = 1;
        if(s1[0] == s[1])
            kts = 1;
    }
    
    if(ktt && kts)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}