#include <bits/stdc++.h>
#define ll long long int
#define N 50
using namespace std;

char mark[N];

int main()
{
    int n, t, i;
    cin >> n >> t;

    string s;
    cin >> s;

    //cout << "before while" << endl;
    while(t)
    {
        for(i=0;i<n-1;i++)
        {
            if(s.at(i)=='B' && s.at(i+1)=='G')
                mark[i] = 1;
            else
                mark[i] = 0;
        }
        for(i=0;i<n-1;i++)
        {
            if(mark[i])
            {
                s.at(i) = 'G';
                s.at(i+1) = 'B';
            }    
        }
        t--;
    }

    //cout << "exited" << endl;
    cout << s;
    return 0;
}