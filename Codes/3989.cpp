#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void f() {
		int n,m;
		cin >> n >> m ;
		int a[n][m];
		int maxRowCol[n][m];
		int maxRow[n];

		for(int i=0; i < n; i++) {
				for(int j=0; j < m; j++) {
						cin >> a[i][j];
				}
		}

		for(int col=0; col<m;col++) maxRowCol[n-1][col]=1;
		for(int row=n-2; row>=0;row--)
				for(int col=0; col<m; col++)
						if(a[row][col] <= a[row+1][col])
								maxRowCol[row][col]=maxRowCol[row+1][col]+1;
						else 
								maxRowCol[row][col]=1;


		for(int row=0; row<n;row++) {
				maxRow[row]=1;
				for(int col=0; col<m; col++)
						if(maxRowCol[row][col] > maxRow[row])
								maxRow[row] = maxRowCol[row][col];
		}

		int k;
		cin >> k;
		for(int i=0; i < k;i++) {
				int l,r;
				cin >> l >> r;
				cout << (l+maxRow[l-1]-1 >= r ? "Yes" : "No") << endl;
		}
}

int main() {
		f();
		return 0;
}
