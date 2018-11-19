#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char ch[110][3],s[3],k[5];
    int n;
    int i,j,x;
    cin>>s[0]>>s[1];
    cin>>n;
    i=0;
    for(i=0;i<n;i++)
    {
        cin>>ch[i][0]>>ch[i][1];
    }
   /* if(n==1) {
        if((s[0]==ch[0][0] && s[1]==ch[0][1]) || (s[0]==ch[0][1] && s[1]==ch[0][0])) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        return 0;
    }*/

    for(i=0;i<n;i++)
    {
        k[0]=ch[i][0];k[1]=ch[i][1];
        for(j=0;j<n;j++)
         {
             k[2]=ch[j][0];
             k[3]=ch[j][1];
             if((k[0]==s[0]&& k[1]==s[1]) || (k[1]==s[0] && k[2]==s[1]) || (k[2]==s[0] && k[3]==s[1])) { cout<<"Yes"<<endl; return 0;}

             }
    }
    cout<<"NO"<<endl;
    return 0;
}
