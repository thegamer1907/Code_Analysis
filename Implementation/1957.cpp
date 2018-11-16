#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int A[1000], B[1000], C[1000],i,sumA=0,sumB=0,sumC=0;
	for (i=0;i<n;i++) {
		cin >> A[i] >> B[i] >> C[i];
		sumA+=A[i];sumB+=B[i];sumC+=C[i];
	}	
	if (sumA==0 && sumB==0 && sumC==0) printf("YES");
	else printf("NO");
	
	return 0;
}