#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1;
    int n;
    cin >> n;
    int flag1=0,flag2=0;
    //cout << s[0] << " " << s[1] << endl;
    for(int i=1;i<=n;i++)
    {
         cin >> s1;
        // cout << s1[0] << " " << s1[1] << endl;
         if(s1[0]==s[1])
         {
             flag1=1;
         }
         if(s1[1]==s[0])
         {
             flag2=1;
         }
         if((s1[0]==s[0] && s1[1]==s[1] )||(s1[1]==s[0] && s1[0]==s[1]))
         {
             flag1=1;
             flag2=1;
         }

    }
  //  cout << flag1 << " " << flag2 << endl;
    if(flag1==1 && flag2==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

