#include <iostream>

using namespace std;

bool checkTen(int a) {
   int cnt = 0;
   while(a) {
      cnt += (a % 10);
      a /= 10;
   }

   return (cnt == 10);
}

int main(int argc, char** argv) {
   int k, n = 10;

   cin >> k;
   while(k) {
      n += 9;
      if(checkTen(n)) {
         k--;
      }
   }

   cout << n << endl;

   return 0;
}
