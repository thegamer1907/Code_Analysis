#include <bits/stdc++.h>
using namespace std;
char s1,s2;
int n;
int kt[100][3];
void nhap()
{
    scanf("%c%c\n",&s1,&s2);
    scanf("%d\n",&n);
    for (int i=1; i<=n; i++)
    {
        char x,y;
        scanf("%c%c\n",&x,&y);
        if (x == s1 && y == s2) {cout<<"YES"; exit(0);}
        kt[x - 'a'][1] = 1;
        kt[y - 'a'][2] = 1;
    }
}
void solve()
{
    if (kt[s1 - 'a'][2] == 1 && kt[s2 - 'a'][1] == 1) {cout<<"YES";}
    else {cout<<"NO";}
}
int main()
{
    nhap();
    solve();
}
