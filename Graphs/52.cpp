#include<iostream>
#include<vector>
#include<fstream>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    int l;
    string o;
    int t;
    cin >>l >> t >> o;
    for(int p = 0; p < t; p++)
    {
        for(int i = 0; i < o.length()-1; i++)
        {
            if(o[i]=='B' && o[i+1] == 'G')
            {
                o[i] = 'G';
                o[i+1] = 'B';
                i++;
            }
        }
    }
    cout << o;
	return 0;
}
