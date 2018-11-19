#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3;
    cin >> s1;
    int n;
    cin >> n;
    s2="";
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin >> s3;
        if((s3[0]==s1[0]&&s3[1]==s1[1])||s3[0]==s1[1]&&s3[1]==s1[0])
        {
            flag=2;
            break;
        }
        s2+=s3;
    }
    if(flag==2)
    {
        cout << "YES";
    }
    else
    {
        for(int j=0;j<s2.length();j+=2)
        {
            if(s2[j]==s1[1])
            {
                flag++;
                break;
            }
        }
        for(int k=1;k<s2.length();k+=2)
        {
            if(s2[k]==s1[0])
            {
                flag++;
                break;
            }

        }
        if(flag==2)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
