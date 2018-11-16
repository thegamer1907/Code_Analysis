//https://codeforces.com/problemset/problem/489/B
#include <bits/stdc++.h> 
using namespace std;

int matchpair(int *barr,int* garr,int m,int n){

	sort(barr,barr+m);
	sort(garr,garr+n);

	int i=0,j=0,count =0;
	while( i<m && j<n){
		if(barr[i] >garr[j] + 1)j++;
		else if (garr[j] > barr[i] + 1)i++;

		else{       //it means that their skills within matchable range 
			count++;
			i++;
			j++;
		}

	}
	return count;
}

int main(int argc, char const *argv[])
{
	int m,n;
	cin >> m ;
	int *barr = new int[m];
	for (int i = 0; i < m; ++i)cin >> barr[i];

	cin >> n ;
	int *garr = new int[n];
	for (int i = 0; i < n; ++i)cin >> garr[i];

	int max = matchpair(barr,garr,m,n);

	cout << max;
	
	return 0;
}