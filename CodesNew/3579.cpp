#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	int n,m;
	std::cin >> n;
	std::cin >> m;

	int npeople[n];
	for (int i = 0; i<n;i++){
		int dummy;
		std::cin >> dummy;
		npeople[i] = dummy;
	} 
	int min;
	int max;
	sort(npeople, npeople+n);
	max = npeople[n-1] + m;
	int rank = 0; 
	while (m > 0){//Here we are trying to find minimum
		// cout << m << " ";
		if (rank == n-1){
			min = npeople[n-1]+ceil((float) m/n); 			
			break;		
		}
		m = m - (rank+1)*(npeople[rank+1]-npeople[rank]);
		rank ++;
	
	}
	if (m<=0){
		min = npeople[n-1];	
		//cout << "ok";
	}
	// cout << ceil((float) m/n);
	std:: cout << min << " " << max;
	


}


