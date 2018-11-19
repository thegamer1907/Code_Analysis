#include<bits/stdc++.h>

using namespace std;

#define input(a) scanf("%d", &a)
#define inputStr(a) getline(cin, a)
#define inputLong(a) scanf("%I64d", &a)
#define clr(a) memset(a, 0, sizeof(a))
#define printn(a) cout<<a<<"\n"
#define print(a) cout<<a
#define printarr(a,n) for(int i=0; i<n; i++) printf("%d ",a[i])

int main()
{
    string pass,inp;
    int n;
    cin>>pass;
    cin>>n;

    bool flag = false;
    bool ans = false;
    bool special = false;
    bool spflag = false;
    bool seflag = false;
    if(pass[0] == pass[1])
        special = true;
    for(int i=0; i<n; i++)
    {
        cin>>inp;

        if(special)
        {
            if(inp[1] == pass[0])
                spflag = true;

            if(spflag and inp[0] == pass[1])
                ans = true;

        }

        if(inp[0] == pass[0] and inp[1] == pass[1])
        {
            ans = true;
        }

        if(inp[0] == pass[1] and inp[1] == pass[0])
            ans = true;

         if(inp[1] == pass[0])
                seflag = true;
         if(seflag and inp[0] == pass[1])
            ans = true;

        if(inp[0] == pass[1])
            flag = true;

        if(flag and inp[1] == pass[0])
        {
            ans = true;
        }
    }

    if(ans)
        printn("YES");
    else
        printn("NO");

    return 0;
}
