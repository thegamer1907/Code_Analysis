#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;


#define LL long long
#define MP make_pair
#define PB push_back
using namespace std;
string in;
int  n;
bool ans;
bool a,b;
int main()
{
   cin>>in;
    ans = 0;
    n = in.length();
    a = b = 0;
    for(int i=0; i<n-1; i++)
    {
        if(in[i]=='A' && in[i+1]=='B' && a==0)
        {
            a = 1;
            i++;
        }
        else if(a==1 && b==0 && in[i]=='B' && in[i+1]=='A')
        {
            b = 1;
            ans = 1;
            break;
        }
    }

    a = b = 0;
    for(int i=0; i<n-1; i++)
    {
        if(in[i]=='B' && in[i+1]=='A' && a==0)
        {
            a = 1;
            i++;
        }
        else if(a==1 && b==0 && in[i]=='A' && in[i+1]=='B')
        {
            b = 1;
            ans = 1;
            break;
        }
    }
    printf("%s\n",(ans)?"YES":"NO");
    return 0;
}

