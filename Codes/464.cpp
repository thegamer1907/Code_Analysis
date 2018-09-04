#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>
using namespace std;
#define fastcin ios_base::sync_with_stdio(false)
#define precisecout cout << fixed << setprecision(999)
#define pb push_back
#define mk make_pair
#define inf 0x3f3f3f3f
#define mod109 1000000007
#define ll long long
#define binary(x) bitset<8*sizeof(x)>(x)

int main(){
    fastcin;
	
	int k;
	cin >> k;
	for(int i = 19; ; i += 9){
		int val = i;
		int dig = 0;
		while(val > 0){
			dig += val%10;
			val /= 10;
		}
		
		if(dig == 10)
			k--;
		if(k == 0){
			cout << i << endl;
			break;
		}
	}
}