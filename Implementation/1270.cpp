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
    int n,t;
    string q;
    cin >> n >> t >> q;
    for(int i = 1; i<=t;i++){
    	for(int j = 0; j<q.length()-1; j++){
    		if(q[j]=='B' && q[j+1]=='G'){
    			swap(q[j],q[j+1]);
    			j++;
			}
		}
	}
	cout << q;
	
}