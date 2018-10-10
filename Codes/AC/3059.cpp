#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

string str;
string rev;
int lps[N], rlps[N];

void computeLPSArray(string &pat, int lps[])
{
    int M = pat.length();
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0)
            {
                len = lps[len-1];

            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {

    cin>>str;
    rev = str;
    reverse(rev.begin(), rev.end());

    computeLPSArray(str, lps);
    computeLPSArray(rev, rlps);

    int n = str.length();
    int ans = 0;

    for(int i=1; i<n-1; i++) {

        if(lps[i] == rlps[ n+lps[i]-i-2 ]) {
            ans = max(ans, lps[i]);
        }
    }

    if(ans == 0) {
        cout<<"Just a legend\n";
    }
    else {
        cout<<str.substr(0, ans)<<"\n";
    }

    return 0;
}
