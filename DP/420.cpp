#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b,g;
	cin>>b;
	int *boys = new int[b];
	for (int i = 0; i < b; i++){
		cin>>boys[i];
	}
	cin>>g;
	int* girls = new int[g];
	for (int i = 0; i < g; i++){
		cin>>girls[i];
	}
	int i = 0,j = 0,pairs = 0;
	sort(boys,boys+b);
	sort(girls,girls+g);
	while (i < b && j < g){
		if (boys[i] < girls[j]-1){
			i++;
		}else if (boys[i] > girls[j]+1){
			j++;
		}else{
			pairs++;
			i++;
			j++;
		}
	}
	cout<<pairs<<endl;
	return 0;
}