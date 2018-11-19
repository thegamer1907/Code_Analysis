#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1;
    int n;
    vector<string> v;
    cin>>s>>n;
    while(n--)
    {
        cin>>s1;
        v.push_back(s1);
    }
    for(int i = 0; i<v.size(); i++)
    {
        s1 = "";
        s1 += v[i][1];
        s1 += v[i][0];
        //cout<<s1<<endl;
        if(s == v[i] || s == s1)
        {
            printf("YES\n");
            return 0;
        }
        if(v[i][1] == s[0])
        {
            for(int j = 0; j<v.size(); j++)
            {
                if(j == i)
                    continue;
                if(v[j][0] == s[1])
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }

    }
    printf("NO\n");

    return 0;
}



