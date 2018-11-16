#include<iostream>
#include<malloc.h>
using namespace std;
#define abs(a) ((a)<0?-(a):(a))
int n;
int m;
int boys[101];
int girls[101];

void merge(int arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left)*0.5;
		merge(arr, left, mid);
		merge(arr, mid + 1, right);

		int left_len = mid - left + 1;
		int right_len = right - mid;

		int *a = (int *)malloc(left_len * sizeof(int));
		int *b = (int *)malloc(right_len * sizeof(int));

		for (int i = 0, j = left; i < left_len; i++) {
			a[i] = arr[j++];
		}
		for (int i = 0, j = mid + 1; i < right_len; i++) {
			b[i] = arr[j++];
		}

		int i = 0, j = 0, k = left;
		while (i < left_len && j < right_len)
		{
			if (a[i] <= b[j])
				arr[k++] = a[i++];
			else
				arr[k++] = b[j++];
		}

		while (i<left_len)
		{
			arr[k++] = a[i++];
		}

		while (j < right_len)
		{
			arr[k++] = b[j++];
		}
		free(a);
		free(b);
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> boys[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> girls[i];
	}
	merge(boys, 0, n - 1);
	merge(girls, 0, m - 1);

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(boys[i] - girls[j]) <= 1) {
				res++;
				girls[j] = (int)1e4;
				break;
			}
		}
	}
	cout << res;
	return 0;
}