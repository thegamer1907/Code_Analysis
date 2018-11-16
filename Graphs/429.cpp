#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string str;
    cin>>a>>b;
    cin>>str;
    for(int j=0; j<b; j++)
    {
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                swap(str[i],str[i+1]);
                i++;
            }
        }
    }
    for(int i=0; i<str.size(); i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
