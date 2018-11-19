#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>> s;
    long n;
    cin>>n;
    vector <string> st;
    st.resize(n);
    for (long i=0; i<n; ++i)
        cin>>st[i];
    for (long i=0; i<n; ++i)
    {
        if (st[i]==s)
        {
            cout<<"YES";
            return 0;
        }
    }
    for (long i=0; i<n; ++i)
    {
        if (st[i][1]==s[0])
            for (long j=0; j<n; ++j)
                if (st[j][0]==s[1])
                {
                    cout<<"YES";
                    return 0;
                }
    }
    cout<<"NO";
}
