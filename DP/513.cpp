#include<iostream>
#include<string>

using namespace std;

int main()
{
    string n;
    int m,q1,q2;
    int dp[100000];
    int value = 0;

    cin >> n;
    int maxlen = n.length();
    dp[0] = 0;

    for(int i = 1; i < maxlen; i++)
    {
        if(n[i] == n[i-1])
        {
            value++;
        }
        dp[i] = value;
    }

    cin >> m;
    
    for(int i = 0; i < m; i++)
    {
        cin >> q1 >> q2;

        cout << dp[q2 - 1] - dp[q1 - 1]<< endl;
    }


    return 0;
}