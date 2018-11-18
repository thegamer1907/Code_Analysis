#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string ans;
    cin >> ans;
    int n;
    cin >> n;
    string a[n];
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==ans)
        {
            flag = true;
        }
    }
    if(!flag)
    {
        bool temp1 = false,temp2 = false;
        for(int i=0;i<n;i++)
        {
            if(a[i][1]==ans[0])
            {
                temp1 = true;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i][0]==ans[1])
            {
                temp2 = true;
                break;
            }
        }
        if(temp1&&temp2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("YES");
    }
    return 0;
}
