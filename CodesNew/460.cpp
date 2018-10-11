#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int z[a];
	for(int i=0;i<a;i++){
		cin>>z[i];
	}
	int sum=0,max=-1,x=0;
	for(int i=0,j=0;i<a;i++){
		if(sum+z[i]>b){
			sum-=z[j];
			j++;
			i--;
			x--;
		}
		else{
			sum+=z[i];
			x++;

			if(max<x){
				max=x;
			}
		}
	}
	if(max==-1){
		cout << x <<endl;
	}
	else cout << max <<endl;
}