#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a[101];
    int j,k=0;
    cin>>a;
    for(int i=0;a[i]!='\0';++i)
    {
        for(j=0;a[i]==a[i+j]&&a[i+j]!='\0';++j);
        if(j>6)
        {
            k=1;
            break;
        }
    }
    if(k)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
