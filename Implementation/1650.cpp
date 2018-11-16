#include<bits/stdc++.h>
using namespace std;
int  main()
/*{
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<i+7;j++)
        {
         if(str[j]!=str[i])
         {
             flag=0;
             break;
         }
         else
            flag=1;
        }
        if(flag==0)
            break;
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
*/

{

    string str;
    cin>>str;
    string b="1111111";
    string c="0000000";
    int p=str.find(b);
    int q=str.find(c);
    if(p>=0||q>=0)
    {
        cout<<"YES"<<endl;;
    }
    else
        cout<<"NO"<<endl;;
}
