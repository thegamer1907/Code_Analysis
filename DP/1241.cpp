#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n ;
	int one_counter = 0 , zero_counter = 0 , main_zeros = -1 ;
	cin >> n ;
	while(n--) {
		int x ;
		cin >> x ;
		if(x == 1) {
			one_counter++ ;
			if(zero_counter > 0){
				zero_counter-- ;
			}
		}

		else {
			zero_counter++ ;
			if(zero_counter > main_zeros) {
				main_zeros = zero_counter ;
			}
		}

	}
	cout << one_counter + main_zeros ;
  return 0 ;
}
