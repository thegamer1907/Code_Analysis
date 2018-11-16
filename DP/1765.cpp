#include <bits/stdc++.h>

typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+10;
using namespace std;
string s;
bool jd_1=0, jd_2=0, ss[maxn];
int num=0;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A' && !ss[i])
        {
            if(s[i+2]=='A' && s[i+1]=='B' && !ss[i+1] && !ss[i+2])
            {
                num++;
                ss[i+1] = 1;
                ss[i+2] = 1;
            }
            else if(s[i+1]=='B' && !ss[i+1])
            {
                jd_1 = 1;
                ss[i+1] = 1;
            }
        }
        else if(s[i]=='B' && !ss[i])
        {
            if(s[i+1]=='A' && !ss[i+1] && s[i+2]=='B' && !ss[i+2])
            {
                num++;
                ss[i+1] = 1;
                ss[i+2] = 1;
            }
            else if(s[i+1]=='A' && !ss[i+1])
            {
                jd_2 = 1;
            }
        }

        if(jd_1+jd_2+num>=2)
        {
            cout <<"YES" <<endl;
            return 0;
        }
    }cout <<"NO" <<endl;

    return 0;
}
