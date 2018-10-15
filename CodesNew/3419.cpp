#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

bool f(int a,int b){return a>b;}

int main(){
	int n,m;
	cin >> n;
	int a[n];
	cin >> m;
	
	//scanning
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	sort(a,a+n,f);	
	
	int max= a[0];//declaring max
		
	int answer2= max + m,answer1;//calculate answer2 (it is easy)
	
	int differenceSum=0;
	
	for(int i = 0;i < n;i++){ //making every member equel to maximum one
		differenceSum += max - a[i];
	}
	
	m -= differenceSum;
	
	if(m<0)
		answer1 = max;
	else{
		answer1 = max + (m / n); 	
		m %= n;
		answer1 += (m > 0);
	
	}
	
	
	
	
	cout << answer1 << " " << answer2;
	


}