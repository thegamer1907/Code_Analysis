#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    cin>>str1;
    int n;
    cin>>n;
    string str2[n];
    for(int i=0;i<n;i++)
        cin>>str2[i];
    for(int i=0;i<n;i++)
    {
        if(str1==str2[i])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(str1[0]==str2[i][1])
        {
            for(int j=0;j<n;j++)
            {
                if(str1[1]==str2[j][0])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
