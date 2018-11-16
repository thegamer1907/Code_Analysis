#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100 * 1000;
int prs[MAXN  +10];

int main()
{
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < (int)str.size(); i ++)
    {
        if(str[i] ==  str[i + 1])
        {
            prs[i + 1] = prs[i] + 1;
        }
        else
        {
            prs[i + 1] = prs[i];
        }
    }
    for (int i = 0; i < n; i ++)
    {
        int a, b;
        cin >> a >> b;
        cout << prs[b - 1] - prs[a - 1] << endl;
    }
}
