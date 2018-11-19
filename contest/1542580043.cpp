#include<iostream>
using namespace std;
string tar,now;
string str[101];
int n;
int main()
{
    cin>>tar>>n;
    for(int i=0;i<n;++i)cin>>str[i];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            now=str[i]+str[j];
            if(now.find(tar)!=-1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
