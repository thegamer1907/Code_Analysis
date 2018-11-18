#include<bits/stdc++.h>
using namespace std;
vector< pair<char, pair< int,bool > > >v;
int main()
{
    char s[2];
    cin>>s[0]>>s[1];
    int n;
    cin>>n;
    int f1 = 0,f2 = 0;
    char b[101][3];
  
    for(int i =0;i<n;i++)
    {
          char c,h;
          cin>>c>>h;
          b[i][0]=c,b[i][1]=h;
        if((s[0]==b[i][0]&&s[1]==b[i][1])) return !printf("YES");

    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(b[i][0]==s[1]&&b[j][1]==s[0]) return !printf("YES");
        }
    }
    cout<<"NO";
    return 0;
}
