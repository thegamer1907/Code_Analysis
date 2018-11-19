#include <iostream>
#include <string>


int main() {
  std::ios_base::sync_with_stdio(false);
  std::string passw;
  int n;
  bool fit=false;
  bool rev=false;
  bool start=false;
  bool end=false;

  std::cin >> passw;
  std::cin >> n;

  for(int i=0;i<n;i++) {
    std::string word;
    std::cin >> word;

    if(word == passw) {
      fit = true;
    } else if(word[1] == passw[0] && word[0] == passw[1]) {
      rev = true;
    } else if(word[1] == passw[0]) {
      end = true;
    } else if(word[0] == passw[1]) {
      start = true;
    }
  }

  if(fit || rev || (end && start)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
