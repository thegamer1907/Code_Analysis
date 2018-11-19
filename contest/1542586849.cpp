#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2[100], s3;
    int n, i, j;
    bool flag= 0;
    cin>>s1;
    scanf("%d", &n);
    for(i= 0; i<n; i++)
        cin>> s2[i];

    for(i= 0; i<n; i++)
    {
        for(j= 0; j<n; j++)
        {
            s3= s2[i]+s2[j];
            if(strstr(s3.c_str(), s1.c_str()))
            {
                printf("YES\n");
                flag= 1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag)
        printf("NO\n");

    return 0;
}
