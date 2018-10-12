#include <iostream>
#include <algorithm>
using namespace std;
const int sz =5*1e+5 +100;
int in =0 ,iarr[sz] , counter =0;
int main (void){
	cin >> in;
	for (int i =0 ; i< in ;i++)cin >> iarr[i];
	sort(iarr,iarr+in);
	int mid =in/2 ,i=0 ,j=mid;
	while (i<mid && j<in){
        if (2*iarr[i]<=iarr[j] )
        {
            counter++;
            i++;
            j++;
            continue;
        }
        j++;
	}
	cout << in - counter <<endl;
	return 0;
}
