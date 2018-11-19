#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a, t;
    vector<string> f;
    long n;
    cin>>a;
    cin>>n;
    f.assign(n, string());
    for(long i=0; i<n; ++i)
        cin>>f[i];
    for(long i=0; i<n; ++i)
        for(long j=0; j<n; ++j)
        {
            t=f[j]+f[i]+f[j];
            if((t.find(a))<6)
            {
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";
}
