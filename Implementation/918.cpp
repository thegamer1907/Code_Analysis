#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    string str;
    cin>>n>>t>>str;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[j]=='B'&&str[j+1]=='G')
            {
                swap(str[j],str[j+1]);
                j++;
            }
        }
    }
    cout<<str<<endl;
}
