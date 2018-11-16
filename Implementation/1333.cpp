#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    scanf("%d %d\n", &n, &t);
    char s[n];
    for (int i=0; i<n; i++)
        scanf("%c", &s[i]);
    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i];
	return 0;
}