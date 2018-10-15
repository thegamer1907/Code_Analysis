#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	long long arr[a+1];
	arr[0]=0;
	for(int i=1;i<=a;i++){
		long long g;
		cin>>g;
		arr[i]=arr[i-1]+g;
	}
	long long suma=0;
	for(int k=0;k<b;k++){
		long long g;
		cin>>g;
		suma+=g;
		if(suma>=arr[a]){
			cout<<a<<endl;
			suma=0;
		}
		else{
			int mayor=a+1,menor=0;
			while(mayor-menor>1){
				int med=(mayor+menor)/2;
				if(arr[med]<=suma){
					menor=med;
				}
				else mayor=med;
			}
			cout<<a-menor<<endl;
		}
	}
}
