# include <iostream>
using namespace std;
int main()
{
	
	int size ;
	cin >> size;
	int arr[size];
	int cnt=0;
	int temp=0;;
	for  ( int i=0;i<size ; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<size; i++) {
		for (int j = i; j < size; j++)
		{
			cnt=0;
			for ( int k=0; k<size; k++) {

				if (i<=k && k<=j) {
					cnt+=1-arr[k];
				}
				else {
					cnt+=arr[k];
				}
			}
			if (temp<cnt) {
				temp=cnt;
			}

		}
	}
	cout << temp;

	return 0;
}