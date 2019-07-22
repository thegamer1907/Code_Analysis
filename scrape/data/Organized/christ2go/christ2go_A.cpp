// C.cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  long long n,m,k;
  cin >> n >> m >> k;
  deque<long long> numbers(m);
  for(int i = 0; i < m;i++)
    cin >> numbers[i];
  long long sindex = 0;  
  long long ops = 0;
  while(numbers.size() != 0) {
    long long start = numbers[0]+sindex;
    long long pageEnd   = ((start-1)/k+1)*(k);
    long long cnt = 0;
    while((numbers[cnt]+sindex) <= pageEnd && cnt < numbers.size()) {
      cnt++;
    }
    for(long long i = 0; i < cnt;i++)
    { 
       numbers.pop_front();
    }    
    sindex -= cnt;
    ops++;
  }
  cout << ops << endl;
}