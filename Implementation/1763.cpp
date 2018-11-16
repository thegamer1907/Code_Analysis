#include <iostream>

using namespace std;

int main() {

string s="",o="1111111",t="0000000";

cin >> s;

if (s.find(o)<s.length() || s.find(t)<s.length())
   cout << "YES";
else cout << "NO";

return 0;

}
