#include <iostream>
#include <utility>
#include <algorithm>

std::pair<double, int> times[5];

std::string solve() {
  for (int i = 0; i < 5; ++i)
    if (times[i].second and times[(i+4)%5].second)
      return "YES";
  return "NO";
}

int main() {
  int h, m, s, t1, t2;   std::cin>>h>>m>>s>>t1>>t2;
  times[0] = {(h%12)*30.0 + m*30.0/60.0 + s*(30.0/60.0)/60.0, 0};
  times[1] = {m*6.0 + s*0.1, 0};
  times[2] = {s*6.0, 0};
  times[3] = {(t1%12)*30.0, 1};
  times[4] = {(t2%12)*30.0, 1};
  std::sort(times, times+5);
  std::cout<<solve()<<"\n";

  return 0;
}
