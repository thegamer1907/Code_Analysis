#include<iostream>
#include<algorithm>

using namespace std;
bool Judge(int t1,int t2,int l,int r)
{
	if(t1 > l && t1 <= r
	&& t2 > l && t2 <= r)
		return true;
	else
		return false;
}

int main( )
{
	int h[6],t[4];
	cin >> h[0] >> h[1] >> h[2] >> t[0] >> t[1];
	h[1] /= 5,h[2] /= 5;
	for(int j = 0; j < 3; j++){
		if(h[j] == 12) h[j] = 0;
		h[j + 3] = h[j] + 12;	
	}
	for(int j = 0; j < 2; j++){
		if(t[j] == 12) t[j] = 0;
		t[j + 2] = t[j] + 12;
	}
	sort(h,h + 6);
	for(int j = 0; j < 5; j++){
	//	cout << h[j] << " " << h[j + 1] << endl; 
		for(int k = 0; k < 4; k += 2){
			for(int l = 1; l < 4; l += 2){
				if(Judge(t[k],t[l],h[j],h[j + 1])){
				//	cout << t[k] << "__" << t[l] << endl;
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}

