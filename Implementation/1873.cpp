#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
	cin >> n;
	vector <int> vx,vy,vz;
	for (int i=0;i<n ; i++){
		int x, y,z;
		cin >> x >> y >> z;
        vx.push_back(x);
        vy.push_back(y);
        vz.push_back(z);
	}
 
  int sumx = accumulate(vx.begin(), vx.end(), 0);
  int sumy = accumulate(vy.begin(), vy.end(), 0);
  int sumz = accumulate(vz.begin(), vz.end(), 0);

  if (sumx == 0 && sumy == 0 && sumz == 0){
  	cout << "YES";
  }
  else {
  	cout << "NO";
  }



}
