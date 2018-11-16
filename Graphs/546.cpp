#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
#define read() freopen("input.txt","r",stdin)



int main() {
    
  //  read();
    
    
    
    char line[55]; int t,l;
    cin>>l>>t;
    scanf("%s",line);
    
    //  printf("%s",line);
    
    l = sizeof(line) / sizeof(line[0]);
    
    for (int i=0; i<t; i++) {
        for (int j=1; j<l; j++) {
            if (line[j-1]=='B' && line[j]=='G') {
                //cout<<line[j-1]<<" "<<line[j]<<endl;
                swap(line[j-1], line[j]);
                j++;
            }
        }
    }
    printf("%s\n",line);
    
}
