// C.cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  long long n,m,k;
  cin >> n >> m >> k;
  deque<int> numbers(m);
  for(int i = 0; i < m;i++)
    cin >> numbers[i];
  int sindex = 0;  
  int ops = 0;
  while(numbers.size() != 0) {
    int start = numbers[0]+sindex;
    int pageStart = ((start-1)/k)*k+1;
    int pageEnd   = ((start-1)/k+1)*(k);
    int cnt = 0;
    while((numbers[cnt]+sindex) <= pageEnd && cnt < numbers.size()) {
      cnt++;
    }
    for(int i = 0; i < cnt;i++)
    { 
       numbers.pop_front();
    }    
    sindex -= cnt;
    ops++;
  }
  cout << ops << endl;
}