#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    string str;
    int n;
    int t;
    cin>>n>>t;
    cin>>str;
    int arr[n],x=0,i,j,k;
    for(j=0;j<t;j++)
    {
        for( i=0;i<n;i++)
     {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                swap(str[i],str[i+1]);
                i++;
            }
     }

    }
    cout<<str<<endl;
}
