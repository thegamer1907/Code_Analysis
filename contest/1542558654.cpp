#include <iostream>
#include <set>
#include <bitset>

int pow(int a, int b);
int main() {
  std::ios_base::sync_with_stdio(false);

  std::set<int> tasks;
  std::bitset<4> knows;

  int n,k;
  std::cin >> n >> k;

  for(int i=0;i<n;i++) {
    int taskid = 0;
    for(int j=0;j<k;j++) {
      int know;
      std::cin >> know;
      if(know==1) {
        taskid += pow(2,j);
      }
    }

    tasks.insert(taskid);
  }
  bool satisf = false;

  for(auto it : tasks) {
    int taskid = it;
    std::bitset<4> id1(taskid);

    if(id1.count() == 0) {
      satisf = true;
    } else if(id1.count() == 1) {
      for(auto it2 : tasks) {
        int taskid2 = it2;
        std::bitset<4> id2(taskid2);
        for(int kk=0;kk<4;kk++) {
          if(!((id1[kk] && !id2[kk]) || !id1[kk])) {
            break;
          }
          if(kk==3)
            satisf = true;
        }
        if(satisf) break;
      }
    } else if(id1.count() == 2 && k>3) {
      for(auto it2 : tasks) {
        int taskid2 = it2;
        std::bitset<4> id2(taskid2);
        for(int kk=0;kk<4;kk++) {
          if(id1[kk] == id2[kk]) {
            break;
          }
          if(kk==3)
            satisf = true;
        }
        if(satisf) break;
      }
    }
  }

  if(satisf) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}

int pow(int a, int b) {
  int res = 1;
  for(int i=0; i<b; i++) {
    res*=a;
  }
  return res;
}
