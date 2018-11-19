#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    cin >>a;
    long n;
    cin >>n;
    vector<string> t(n);
    for (long i=0; i<n; i++)
        cin >>t[i];
    for (long i=0; i<n; i++)
        for (long j=i; j<n; j++)
        {
            string c=t[i],d=t[j];
            if (c == a || d == a)
            {
                cout <<"YES";
                return 0;
            }
            if (t[i][1] == a[0] && t[j][0] == a[1])
            {
                cout <<"YES";
                return 0;
            }
            if (t[j][1] == a[0] && t[i][0] == a[1])
            {
                cout <<"YES";
                return 0;
            }
        }
    cout <<"NO";
}
