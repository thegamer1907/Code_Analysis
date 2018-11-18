
#include <iostream>
#include <cmath>
#include <math.h>
#include<string>
#include<algorithm>
#include<vector>
#define forl(i,x) for(int i = 0; i < x; i++)
#define wt while(true)
#define pi 3.14159265359
#define MOD 1000000007
#define st =true;
#define sf =false;
#define sortv(v) sort(v.begin(),v.end());
#define MNX	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
ull counter = 0;
vector <int> v;
bool prime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) {
			return false;
		}
	}
	return true;
}
int getMini(int arr[], int size) {
	int miniIndex = 0;
	int mini = 1e09;
	forl(i, size) {
		if (arr[i] < mini&&arr[i]>0) {
			mini = arr[i];
			miniIndex = i;
		}
	}
	return miniIndex;
}
void sortMe(int arr[], int size) {
	while (size--) {
		for (int i = 0; i<size; i++) {
			if (arr[i]<arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

int main() {
	MNX
	string pass; cin>>pass;
	int x; cin>>x;
	string arr[100001];
	forl(i,x) cin>>arr[i];
	bool a = false,b = false;
	forl(i,x){
		if(arr[i]==pass){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	forl(i,x){
		string word = arr[i];
		if(pass[0]==word[1]){a st;break;}
	}
	forl(i,x){
		string word = arr[i];
		if(pass[1]==word[0]){b st;break;}
	}
	if(a&&b){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}