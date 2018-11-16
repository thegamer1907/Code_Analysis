#include <iostream>

using namespace std;

const int maxn = 1010;
int n, t, sheep[maxn], fence;
string s;

int main()
{
    cin >> n >> t;
    cin >> s;

    n=s.size();
    for (int i=0; i<n; i++)
    {
        if (s[i] == 'G')
            sheep[fence]++;

        if (s[i]=='B')
            fence++;
    }

    for (int i=0;i<t;i++)
    {
        for (int j=1;j<=fence;j++)
        {
            if (sheep[j]>0)
            {
                sheep[j-1]++;
                sheep[j]--;
            }

        }
    }

    for (int i=0;i<=fence;i++)
    {
        for (int j=0;j<sheep[i];j++)
            cout << "G";

        if (i<fence)
        cout << "B";
    }


    return 0;
}


/**
5 2
BBGGBGGG

*/

