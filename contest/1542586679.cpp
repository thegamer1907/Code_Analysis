#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[3];
    cin>>str;
    // cout<<str;
    int n,i,j;
    cin>>n;
    char arr[n][3];
    for(i=0; i<n; i++) cin>>arr[i];
    // for(i=0;i<n;i++) cout<<arr[i];
    for(i=0; i<n; i++)
    {
        if(!(strcmp(arr[i],str)))
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    for(i=0; i<n; i++)
    {
        if(str[0]==arr[i][1] && str[1]==arr[i][0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(i=0; i<n; i++)
    {
        if(str[0]==arr[i][1])
        {
           // cout<<str[0]<<endl;
            for(j=0; j<n; j++)
            {
               // cout<<str[1];
                if(str[1]==arr[j][0])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;


}
