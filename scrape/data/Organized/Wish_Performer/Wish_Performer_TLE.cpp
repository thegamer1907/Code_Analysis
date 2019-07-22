#include <bits/stdc++.h>
 
using namespace std;
const int maxn = 2e5 + 5;
 
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
  long long n, m, k;
  cin >> n >> m >> k;
  vector <long long> p(m);
  for (int i = 0; i < m; i++){
    cin >> p[i];
  }
  sort (p.begin(), p.end());
  int answ = 0;
  long long mm = k;
  vector <long long>::iterator itt;
  bool ok = false;
  while(true)
  {
    answ++;
    
    vector <long long>::iterator it = lower_bound(p.begin(), p.end(), k);
    if (ok){
    	if (it == itt){
    		long long x = *it - k;
    		long long y = x / mm;
    		if (x % mm != 0) y++;
    		k += mm * y;
    		answ--;
    		continue;
    	}
    }
    ok = true;
    itt = it;
    if (*it > k){
		if (it == p.begin()){
	 		if (*it > k){
	 			long long x = p[0] - k;
	 			long long y = x / mm;
	 			if (x % mm != 0) y++;
    			k += mm * y;
    			answ--;
    			continue;
    		}
    	}
    	--it;
    }
    if (*it == p[m - 1]){
      break;
    }
    else k += (it - p.begin() + 1);
    itt = it;
  }
  cout << answ << endl;
  return 0;
}