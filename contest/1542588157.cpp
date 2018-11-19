#include <bits/stdc++.h>
using namespace std;




int main()
{
    string a;
    cin>>a;
    int j;

    int n;
    cin>>n;
    string b[105];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int i;
    string c;
    for(i=0; i<n; i++)
    {
        if(b[i]==a)
        {
            printf("YES\n");
            return 0;
        }
        for(j=0; j<n; j++)
        {
           c.clear();
            c += b[i][1];
            c+= b[j][0];
            // cout<<c<<endl;
            if(c==a)
            {

                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");



}



