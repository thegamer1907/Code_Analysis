#include <iostream>

using namespace std;

int main()
{
    char ch[2];
    cin >> ch[0]>>ch[1];
    int n;
    cin>>n;
    char a[n][2];
    char b[2]={false,false};
    for(int i = 0; i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        
        if (ch[0]==a[i][0] && ch[1]==a[i][1])
        {
            b[0]=true;
            b[1]=true;
            break;
        }
        if(a[i][1]==ch[0])
           {b[0]=true;}


        if(a[i][0]==ch[1])
            {b[1]=true;}
            
        if(b[0]&&b[1]){break;}
    }
    if(b[0] && b[1])
        {cout<<"yes";}
        else
            {cout<<"no";}

    return 0;
}
