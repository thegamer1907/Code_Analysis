#include <bits/stdc++.h>
using namespace std;

int main() {

	int b,g;
	cin >> b;

	vector<int> boys(b);
	
	for(int i=0;i<b;i++)
	    cin >> boys[i];
	
	cin >> g;
	
	vector<int> girls(g);
	
	for(int i=0;i<g;i++)
	    cin >> girls[i];
	
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	
	int count = 0;
	int ind_b = 0 , ind_g = 0;
	
	while(ind_b<b && ind_g < g){
	    if(abs(boys[ind_b]-girls[ind_g])<2){
	        count++;
	        ind_b++;
	        ind_g++;
	    }
	    else if(boys[ind_b]>girls[ind_g]){
	       // count++;
	       // ind_b++;
	        ind_g++;
	    }
	    else
	        ind_b++;
	}
	cout << count << endl;
	
	return 0;
}