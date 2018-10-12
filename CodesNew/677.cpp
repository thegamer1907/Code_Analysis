#include<bits/stdc++.h>
#define Size 1005

using namespace std;

int main()
{

    int n,m,i,j,c = 0;
    string a[Size],b[Size];

    cin>>n>>m;

    for(i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(j = 0; j<m; j++)
    {
        cin>>b[j];
    }

     for(i = 0; i<n; i++){
        for(j = 0; j<m; j++)
        {

            if(a[i] == b[j])
            {
                ++c;
            }

            //cout<<c<<endl;
        }
     }

     if(c & 1)
     {
         if(n > m-1)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
     else{
        if(n > m)
        {
            cout<<"YES"<<endl;
        }
         else
         {
             cout<<"NO"<<endl;
         }
     }

    return 0;
}
