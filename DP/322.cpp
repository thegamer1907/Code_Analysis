#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000

int main(){
	
	int n;
	cin>>n;
	int* boys = new int[n];
	for(int i=0;i<n;i++){
		cin>>boys[i];
	}
	int m;
	cin>>m;
	int* girls = new int[m];
	for(int i=0;i<m;i++){
		cin>>girls[i];
	}
	
	sort(boys,boys+n);
	sort(girls,girls+m);
	int result = 0;
	for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        if (abs(boys[i] - girls[j]) <= 1)
        {
            girls[j] = 1000;
            result++;
            break;
        }
	
	cout<<result<<endl;
}
