#include<bits/stdc++.h>
using namespace std;
int find_substring(string str,int start,string substring)
{
    int length = str.length();
    for(int i=start;i<length-1;i++)
    {
        if(str[i] == substring[0] && str[i+1] == substring[1])
        {
            return (i+1);
        }
    }
    return -1;
}
int main()
{
    string str;
    getline(cin,str);
    int c1,c2,c3,c4,cheak = 0;
    c1 = find_substring(str,0,"AB");
    if(c1!=-1)
    {
        c2 = find_substring(str,c1+1,"BA");
        if(c2!=-1)
        {
           cheak =1;
        }
    }

    if(cheak == 0)
    {
        c3 = find_substring(str,0,"BA");
        if(c3!=-1)
        {
            c4 = find_substring(str,c3+1,"AB");
            if(c4!=-1)
            {
                cheak = 1;
            }
        }
    }

    if(cheak == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
