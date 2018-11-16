#include<bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf
#define ull unsigned long long int
#define ll  long long
#define db double
#define fl float
#define vin vector<int>
#define pb push_back
#define pob pop_back
#define ft front
#define bk back
#define mp make_pair
#define all(c) c.begin(), c.end()
//pf("%s\n", c.c_str() );

int main()
{
    string s;

    cin>>s;

    int l=s.length();
    int cnt_1=1,cnt_0=1;

    for(int i=0;i<l;i++)
    {
        if(s[i+1]==s[i])
        {
            if(cnt_1>=7 || cnt_0>=7) break;
            else if(s[i]=='1') cnt_1++;
            else if(s[i]=='0') cnt_0++;
        }
        else
        {
            if(cnt_1>=7 || cnt_0>=7) break;
            cnt_0=1;
            cnt_1=1;
            continue;
        }
    }

    //pf("%d\n",cnt_1);

    if(cnt_0>=7 || cnt_1>=7)
        pf("YES\n");
    else
        pf("NO\n");

    return 0;
}
