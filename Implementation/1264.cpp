#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define pb push_back
#define wt while(t--)
#define P 1000000007
#define p 1234567

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    char s[55];
    sf("%s",s);
    while(b--)
    {
        for(int i=0;i<strlen(s);)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=2;
            }
            else
                i++;
        }
    }
    pf("%s\n",s);

    return 0;
}
