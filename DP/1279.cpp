#include<bits/stdc++.h>
#define vpair(d) vector<pair<d, d> >

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0;i < n; i ++){
		cin >> arr[i];
	}
	int start = -1, end = -1, gstart = -1, gend = -1, val = 0;
	int m = 0;
	for(int i = 0; i< n; i ++){
		if(arr[i] == 0){
			val ++;
			if(start == -1)
				start = i;
			end = i;
		}else{
			val --;
		}
		if(val < 0){
			val = 0;
			start = -1;
			end = -1;
		}else{
			if(val > m){
				gstart = start;
				gend = end;
			}
			m = max(m, val);
		}
	}
	int count = 0;
	if(gstart == -1 && gend == -1){
		for(int i = 0; i< n;i ++)
			if(arr[i] == 1)
				count ++;
		cout << count-1 << endl;
		return 0;
	}
	for(int i = 0; i < gstart; i ++)
		if(arr[i] == 1)
			count ++;
			
	for(int i = gend+1; i < n; i ++)
		if(arr[i] == 1)
			count ++;
			
	for(int i= gstart; i <= gend; i ++)
		if(arr[i] == 0)
			count ++;
	
	cout << count << endl;
}