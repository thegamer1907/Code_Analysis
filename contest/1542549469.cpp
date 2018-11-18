#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstdio>

using namespace std;

int ans1,ans2;
int h,m,s,t1,t2;
double x,y,a,b,c;
int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	t1 %= 12;
	t2 %= 12;
	x = t1 * 30.0;
	y = t2 * 30.0;
	h %= 12;
	a = s * 6.0 ;
	b = m * 6.0 + s / 10.0;
	c = h * 30.0 + m / 10.0 + s / 360.0;
	if(a > b){
		swap(a,b);
	}
	if(a > c){
		swap(a,c);
	}
	if(b > c){
		swap(b,c);
	}
	if(x >= a && x < b){
		ans1 = 1;
	}
	else if(x >= b && x < c){
		ans1 = 2;
	}
	else{
		ans1 = 3;
	}
	if(y >= a && y < b){
		ans2 = 1;
	}
	else if(y >= b && y < c){
		ans2 = 2;
	}
	else{
		ans2 = 3;
	}
	if(ans1 == ans2){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}


			  	 	 			  	 	   			   			