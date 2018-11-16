/* Created by
Md.Zakir Hossain 
Date: 27/10/18 12:28 pm  */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,A=0,B=0,C=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
         A+=X;
         B+=Y;
         C+=Z;
    }
        if(A==0&&B==0&&C==0)
        {
            cout<<"YES"<<endl;
        }
        else
            {
                cout<<"NO"<<endl;
        }

    return 0;
}

