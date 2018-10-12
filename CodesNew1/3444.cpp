#include <iostream>
#include<cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int min=0,max=0,n,m;
	double sum=0;
	cin>>n>>m;
	int i=n;
	int a[n];
	while (i>0){
		cin>>a[i];
		if(a[i]<min){
			min=a[i];
		}else if(a[i]>max){
			max=a[i];
		}
		sum=sum+a[i];
		i--;
		}
		if(ceil(float(((sum+m))/n))<max){
			cout<<max<<" "<<max+m;
		}else{
		cout<<ceil(float(((sum+m))/n))<<" "<<max+m;
	}
	
	return 0;
}
