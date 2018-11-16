#include <iostream>
using namespace std;
int main(){
	int n , sum = 0, sumx = 0, sumy = 0, sumz = 0;
	cin>>n;

	int *p = new int [n * 3];

	if(n!=0){
	for(int i = 0; i < n * 3 ; i++){
		cin>>p[i];
		//sum+=p[i];

	}
	for (int i = 0; i < n * 3; i = i + 3)
	{
		sumx+=p[i];

	}
	for (int i = 1; i < n * 3; i = i + 3)
	{
		sumy+=p[i];

	}
	for (int i = 2; i < n * 3; i = i + 3)
	{
		sumz+=p[i];

	}
	/*cout<<sumx<<endl;
	cout<<sumy<<endl;
	cout<<sumz<<endl;*/
	
	if(sumx == 0 && sumy == 0 && sumz == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	return 0;
}