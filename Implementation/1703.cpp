#include <iostream>
#include <string>
#include <math.h>
#include <iterator> 
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include <array>
#include <iomanip> 
using namespace std;


int comp1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
	int n, m, c, i, r, x, y, z, b, j, mal, bol, gg;
	string p, old;
	char k;
	gg = 0;
	cin >> p;
	k = p[0];
	r = 1;
	for(i = 1; i < p.size(); i ++)
	{
		if(p[i] == k)
		{
			r = r + 1;
		}
		else
		{
			k = p[i];
			r = 1;
		}
		if(r >= 7)
		{
			gg = 1;
			break;
		}
	}
	if(gg == 1)
		cout << "YES";
	else
		cout << "NO";

		
return 0;

}