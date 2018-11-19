#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1000001;

template <typename T>
T read()
{
    T x = 0, f = 1; char ch = getchar();
    while(ch < '0' || ch > '9') { if(ch == '-') f = -1; ch = getchar();}
    while(ch >= '0' && ch <= '9') { x = 10 * x + ch - '0'; ch = getchar();}
    return x * f;
}

struct Number_Theory
{

};

int main()
{
	//freopen("ce.in", "r", stdin);
    char pass[3], s[3];
    scanf("%s", pass);
    bool p[26][2];
    memset(p, 0, sizeof p);
    int n = read<int>();
    bool f = 0;
    while(n--)
    {
        scanf("%s", s);
        if(!strcmp(pass, s)) f = 1;
        else
        {
            p[s[0] - 'a'][0] = 1;
            p[s[1] - 'a'][1] = 1;
        }
    }
    if(f || (p[pass[0] - 'a'][1] && p[pass[1] - 'a'][0])) puts("YES");
    else puts("NO");
	return 0;
}
