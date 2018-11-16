#include<iostream>
#include<vector>
#include<fstream>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, w;
    cin >> k >> n >> w;
    long long sum = 0;

    int c = 0;
    for(int i = 1; i <= w; i++)
    {
        c+=i;
    }
    long long result = c*k;
    result -= n;
    if(result>=0)cout << result;
	else cout << "0";
	return 0;
}
