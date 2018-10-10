#include <bits/stdc++.h>

using namespace std;
long long hashS[1000005];
long long hashPower[1000005];
const long long MOD = 1e9+7;
const long long p = 33;
vector<int> occurPlace;
long long curSum = 0;
string s;
long long hashSeg(int l,int r)
{
    long long enddy = hashS[r];
    long long starto = ((l ? hashS[l-1] : 0) * hashPower[r-l+1]) % MOD;
    return (((enddy - starto) % MOD) + MOD) % MOD;
}
int main()
{
    cin >> s;
    for(int i = 0;i < s.length();i++)
    {
        curSum = ((curSum * p) + (s[i] - 'a')) % MOD,hashS[i] = curSum;
        if(s[i] == s[0])
            occurPlace.push_back(i);
    }
    hashPower[0] = 1;
    for(int i = 1;i <= 1e6;i++)
        hashPower[i] = (hashPower[i-1] * p) % MOD;
    int lowestLen = -1;
    for(int i = 0;i < s.length();i++)
    {
        long long curHash = hashSeg(0,i);
        long long otherHash = hashSeg(s.length()-1-i,s.length()-1);
        if(curHash == otherHash)
        {
            for(int j = 1;j < occurPlace.size();j++)
            {
                if(occurPlace[j] + i < s.length()  && occurPlace[j] != s.length()-1-i)
                {
                    if(hashSeg(occurPlace[j],occurPlace[j]+i) == curHash)
                    {
                        lowestLen = i;
                        break;
                    }
                }
            }
        }
    }
    if(lowestLen == -1)
        cout << "Just a legend";
    else
        cout << s.substr(0,lowestLen+1);
    return 0;
}
