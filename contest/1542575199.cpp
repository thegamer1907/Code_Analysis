#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass,input[1000];
    int i,t;
    while(cin>>pass){
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>input[i];
    }



    for(i=0; i<t; i++)
    {


        if(pass==input[i])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(int k=0; k<t; k++)
    {
        if(pass[0]==input[k][1])
        {
            for(int l=0; l<t; l++){
                 if(pass[1]==input[l][0])
                   {   cout<<"YES"<<endl;
            return 0;
                    }
            }
       }


    }

    cout<<"NO"<<endl;

    }

    return 0;
}
