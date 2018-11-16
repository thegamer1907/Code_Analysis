
 #include <iostream>
using namespace std;

int main() {
	int n,k,c=0;
	cin>>n>>k;
	int array[100];
	for(int i=1;i<=n;i++){
		cin>>array[i];}
	for(int i=1;i<=n;i++){
		if((array[i]>=array[k])&&(array[i]>0))
		c++;
	}
	cout<<c;
	return 0;
}