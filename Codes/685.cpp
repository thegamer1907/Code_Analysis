#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool calDigits(ll num)
{
    int sum = 0;
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum == 10 ? 1 : 0;  
}

int main() 
{
	// your code goes here
	ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0);
	int k;  cin>>k;
    for(ll i = 19; ; i += 9)
    {
        if(calDigits(i))    k--;
        if(k == 0)  {   cout<<i;    break;   }
    }
	return 0;
}
