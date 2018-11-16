#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size()<7)
        cout<<"NO"<<endl;
    else{
        for(int i=0;i<str.size();i++)
        {
            int flag=0;
            for(int j=i+1;j<=i+6;j++)
            {
                if(str[i]!=str[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
}
