#include <iostream>
#include <algorithm>
using namespace std;
bool a[100];
int i,j,sum,n,ans,k;
int main() {
	cin >> n;
	for (i;i<n;i++){
		cin >> a[i];
	}
	if (n==1&&a[0]==false){
		cout <<1 << endl;
		return 0;
	}
	for (i=0;i<n;i++){
		for (j=i;j<n;j++){
			sum=0;
			for (k=0;k<n;k++){
				 if ((a[k]==false &&k>=i && k<=j)||(a[k]==true && (i>k||j<k)))sum++;
				 
				
			}
			ans =max(sum,ans);
		}
	}
	cout << ans << endl;
	return 0;
}