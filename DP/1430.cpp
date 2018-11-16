#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;
int a[105],sum[105];
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		sum[i]=(i?sum[i-1]:0)+a[i];
	}
	int ans=sum[n-1]-1;
	for(int i=0; i<n; i++)
		for(int j=i; j<n; j++) {
			ans=max(ans,(j-i+1)-2*(sum[j]-(i?sum[i-1]:0))+sum[n-1]);
		}
	cout<<ans<<endl;
	return 0;
}