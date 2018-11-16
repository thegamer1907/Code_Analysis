#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, cnt=0, cn=0;
    string c;
    cin>>c;
    for(i=0;i<c.size();i++)
    {
        if(int(char(c[i]))==48)
        {
            cn = cn + 1; cnt = 0;
        }
        else
        {
            cnt = cnt + 1; cn = 0;
        }
        if(cn>=7 || cnt>=7)
            {cout<<"YES"; goto xx;}
    }
    cout<<"NO";
xx : ;
}
