#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int CA = 0, CB = 0, CAB = 0;
    for (int i = 0; i < S.size()-1; i++)
    {
        if (S[i] == 'A' && S[i+1] == 'B')
        {
            CA ++;
            if (i+2 < S.size())
            {
                if (S[i+2] == 'A')
                {
                    CAB ++;
                }
            }
        }
        if (S[i] == 'B' && S[i+1] == 'A')
        {
            CB ++;
            if (i+2 < S.size())
            {
                if (S[i+2] == 'B')
                {
                    CAB ++;
                }
            }
        }
        if (CA >= 1 && CB >= 1)
        {
            if (CA + CB - CAB > 1 || CAB > 2)
            {
                cout << "YES";
                return (0);
            }
        }
    }
    cout << "NO";
}
