#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    string password;
    string pass[n];
    for(int i=0;i<n;i++)
        cin>>pass[i];
    bool f=false;
    string temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp=pass[i]+pass[j];
            //cout<<temp<<endl;
            size_t found = temp.find(str);
            if(found!=std::string::npos)
            {
                f=true;
                break;
            }
            temp.clear();
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
     return 0;
}
