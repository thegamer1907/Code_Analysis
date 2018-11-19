#include<bits/stdc++.h>

using namespace std;


int main()
{
    string pass, word;
    int n;
    bool f=false, s=false;
    cin>>pass>>n;
    for(int i=0;i<n;i++)
    {
        cin>>word;
        if(pass==word)
        {
            cout<<"yes";
            return 0;
        }
        if(word[0]==pass[1])
            f=true;
        if(word[1]==pass[0])
            s=true;
    }
    if(f&&s)
        cout<<"yes";
    else
        cout<<"no";
}

/*

*/
