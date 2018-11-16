#include <iostream>

using namespace std;

int main() {

int n=int(),a=int(),x=int(),y=int(),z=int();

cin >> n;

for (int i=0;i<n;i++)
    {
     cin >> a;
     x+=a;

     cin >> a;
     y+=a;

     cin >> a;
     z+=a;


    }

if (x==0 && x==y && x==z)
   cout << "YES";
else cout << "NO";

return 0;

}
