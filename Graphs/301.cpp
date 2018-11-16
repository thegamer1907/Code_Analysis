/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void boys();

int main()
{
    boys();
    return 0;
}

void boys()
{
    int n; string queue; int t;
    cin>>n>>t;
    cin.ignore();
    getline(cin,queue);
    for(int i=0; i<t;i++)
    {
        for(int c=0; queue[c]!='\0';c++)
        {
        if((queue[c]=='B')&&(queue[c+1]=='G'))
        {
            queue[c]='G';
            queue[c+1]='B';
            c++;
        }
        }
    }
    cout<<queue;
}
