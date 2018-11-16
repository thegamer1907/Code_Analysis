#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,t;

	cin >> n >>t;


	char line[n+1];
	for(int i=0;i<n;i++){
		cin >> line[i];
	}
	line[n] = '\0';




	while(t-- > 0){
		for(int i = 0;i <n;i++)
		{
			if(line[i] == 'B' && line[i+1] == 'G')
			{
				
				line[i] = 'G';
				line[i+1] = 'B';
				i++;
			}


		}
	}


	for(int i =0;i<n;i++)
	{
		cout << line[i];
	}
	cout << "\n";
}