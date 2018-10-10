#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int digSum(long long n)
{
    int res = 0;
    while (n > 0)
    {
        res += n%10;
        n /= 10;
    }
    return res;
}

vector<long long> nums;
set<long long> used;
string val;

long long strToLL(string x)
{
    long long res = 0;
    for (int i = 0; i < x.size(); i++)
    {
        res = res*10 + (x[i]-'0');
    }
    return res;
}

void gen(int pos, int n, int sum)
{
    if (pos == n)
    {
        if (used.count( strToLL(val) ) || sum < 10 ) return;
        nums.push_back( strToLL(val) );
        used.insert( strToLL(val) );
        return;
    }
    if (sum == 10)
    {
        val += "0";
        gen(pos+1, n, sum);
        val = val.substr(0, val.size()-1);
    }
    else
    {
        for (int i = 0; i <= 9; i++)
        {
            if (sum + i > 10) break;
            val += (char)( i+'0' );
            gen(pos+1, n, sum+i);
            val = val.substr(0, val.size()-1);
        }
    }
}

string format(string s)
{
    while (s[0] == '0') s = s.substr(1);
    return s;
}

int main()
{
    int k;
    int sz = 2;
    while (nums.size() < 100001)
    {
        val = "";
        gen(0, sz, 0);
        sz++;
    }
    sort(nums.begin(), nums.end());
    //return 0;
    cin >> k;
    cout << nums[k-1]<< endl;
    return 0;
}
