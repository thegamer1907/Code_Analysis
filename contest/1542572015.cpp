#include <bits/stdc++.h>
using namespace std;

char pas[2], kash[2][110];
char l[110], r[110];
int n, counter;
bool check[2];

int main()
{
    cin>>pas[0]>>pas[1];
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>kash[0][i]>>kash[1][i];
        l[i] = kash[1][i];
        r[i] = kash[0][i];

        if(kash[0][i] == pas[0]
           && kash[1][i] == pas[1])
        {
            cout<<"YES";
            return 0;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(l[i] == pas[0] && !check[0]) check[0] = 1, counter++;
        if(r[i] == pas[1] && !check[1]) check[1] = 1, counter++;
    }
    //cout<<counter<<endl;
    if(counter == 2) cout<<"YES";
    else cout<<"NO";
}
