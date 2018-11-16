#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

#define pb push_back

typedef vector<int> vi;
typedef vector<long long int> vlli; 
typedef long long int LL;
typedef unsigned long long int uLL;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x=0,y=0,z=0,xv,yv,zv;
    cin >> n;
    for(int i = 1; i<=n; i++){
    	cin >> xv >> yv >> zv;
    	x+=xv;
    	y+=yv;
    	z+=zv;
	}
	if(!x && !y && !z){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
}