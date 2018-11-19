#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include <set>
using namespace std;
#define Max_N (100000 + 100)

int main() 
{

	int h, m, t, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &t, &t1, &t2);
	double s1[3], s4, s5;
	s1[1] = 360 * h / 12;
	s1[2] = 360 * m / 60 + t * 6.0/60.0;
	s1[3] = 360 * t / 60;
	s1[1] += s1[2]/360.0 * 30;
	sort(s1+1, s1 + 4);
	s4 = 360 * t1 / 12;
	s5 = 360 * t2 / 12;
	int flag = 0;
	
	if (s1[1] < s4 && s4 < s1[2] && s1[1] < s5 && s5 < s1[2] ) flag = 1;
	if (s1[2] < s4 && s4 < s1[3] && s1[2] < s5 && s5 < s1[3] ) flag = 1;
	if ((s1[3] < s4 || s4 < s1[1]) && (s1[3] < s5 || s5 < s1[1]) ) flag = 1;
	if (flag) cout <<"YES" << endl;
	else cout << "NO" << endl;

    return 0;

}
