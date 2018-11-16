#include <bits/stdc++.h>

#define f(i,e) for (int i=1; i<=e; i++)
#define ll long long
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    string c;
    getline (cin,c);
    getline (cin,c);
    int k=0;
    while (t!=0)
    {
        while (k<=c.size()-1)
        {
            if (c[k]=='B' && c[k+1]=='G')
            {
                swap(c[k],c[k+1]);
                k+=2;

            }
            else
                k++;

        }
        t--;
        k=0;
    }

    cout << c;
    return 0;
}
