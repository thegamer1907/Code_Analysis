#include <bits/stdc++.h>

using namespace std;

string a[100];
string b;
string ch;
int main()
{
    cin>>ch;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<a[i].size();k++)
            {
                b.push_back(a[i][k]);
            }
            for(int k=0;k<a[j].size();k++)
            {
                b.push_back(a[j][k]);
            }
            if(b.find(ch)!=std::string::npos)
            {
                printf("YES");
                return 0;
            }
            b.clear();
        }
    }
    printf("NO");
    return 0;
}
