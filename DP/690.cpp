#include<iostream>
#include<cstring>
using namespace std;

const int MAX = 100010;
char str[MAX];
int dp[MAX];

int main()
{
    int k, l, r, sum;
    cin>>str>>k;

    int len = strlen(str);

    for(int i = 1; i < len; i++)
        {
            if(str[i] == str[i-1])
                dp[i] = dp[i-1] + 1;
            else
                dp[i] = dp[i-1];
        }
    while(k--)
    {
        cin>>l>>r;
        
        cout<<dp[r-1] - dp[l-1]<<endl;
    }
    return 0;
}

