#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string ss[105];
int main()
{
    string s;
    cin>>s;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>ss[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string tmp=ss[i]+ss[j];
            if(tmp.find(s)!=string::npos)
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
