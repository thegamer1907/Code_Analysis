#include <bits/stdc++.h>
using namespace std;

string s[1000],t;
int n;

void nhap()
{
    int i;
    getline(cin,t);
    scanf("%d\n",&n);
    for (i=1;i<=n;i++)
    {
        getline(cin,s[i]);
    }
}

bool kt(string a,string b)
{
    string tmp;
    tmp.clear();
    tmp.push_back(a[1]);
    tmp.push_back(b[0]);
    if (tmp==t) {return true;}
    return false;
}
void xuli()
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        if (s[i]==t)
        {
            cout<<"YES";
            return;
        }
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (kt(s[i],s[j])==true)
            {
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
}

int main()
{
    nhap();
    xuli();
}
