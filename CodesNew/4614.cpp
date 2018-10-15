#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include <memory>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <limits.h>
#include <set>
#include <stdio.h>
#include <tgmath.h>
#include <bitset>
#define pb push_back
#define mp make_pair
#define ll long long
#define vi vector <int>
//#define ii pair <int, int>
//#define vii vector < ii >
#define vll vector <ll>
#define hash1 10000000000000061ll
#define MA(a,b) ((a)>(b)?(a):(b))
#define MI(a,b) ((a)<(b)?(a):(b))
#define AB(a) (-(a)<(a)?(a):-(a))
#define na(x) ((x)<P?(x):(x)-P)
#define f first
#define se second
using namespace std;

int digitcount(int n){
	int result = 0;
	for(int i = n; i > 0; i /= 10){
		result++;
	}
	return result;
}

int power(int a, int b){
	if(b==0)return 1;
	if(b==1) return a;
	return a * power(a,b-1);
}

bool pal(string str){
	for(int i=0; i < str.size()/2; i++){
		if(str[i] != str[str.size()-1-i]) return false;
	}
	return true;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for(int i =0; i <n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int count = n;
	int cursor = n/2;
	for(int i = 0; i < n/2;){
		if(!(arr[i]*2>arr[cursor])){
			i++; count--;
		}
		++cursor;
		if(cursor == n)break;
	}
	cout << count << endl;
}
