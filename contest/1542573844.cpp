#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1,str0,str2;
    //scanf(" ");

    cin>>str;
    bool check = false,lol,love;
    lol = love = false;

    int n,cnt = 0;
    cin>>n;
    n = n - 1;
    //scanf(" ");
    cin>>str2;
    str0 += str2;
    if (str[0] == str2[1])
    {
        cnt++;
        lol = true;
    }
    if (str[1] == str2[0])
    {
        cnt++;
        love = true;
    }


    while(n--)
    {
        //scanf(" ");
        cin>>str1;
        str0 += str1;

        if(str == str1)
            check = true;

        if (str[0] == str1[1] && lol == false)
            cnt++;
        if (str[1] == str1[0] && love == false)
            cnt++;

    }

    if (check == true || cnt >= 2)
    {
        cout<<"YES\n";
        return 0;
    }


    str0 += str2;
    int len = str0.size();
    //cout<<str0<<'\n';

    for(int i = 0; i < len-1; i++)
    {
        if(str[0] == str0[i] && str[1] == str0[i+1])
        {
            check = true;
            break;
        }

    }

    if (check)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
