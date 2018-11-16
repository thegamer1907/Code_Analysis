#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	short int n, k;
	cin >> n >> k;
	int scores[101] = {0}, score, k_th_score;
	for (int i = 0; i < n; ++i)
	{
		cin >> score;
		scores[score] ++;
		if(i == k - 1){
			k_th_score = score;
		}
	}
	int advancers = 0;
	for (int i = 100; i >= k_th_score; --i)
	{
		while(scores[i] > 0 and i > 0){
			advancers++;
			scores[i] --;
		}
	}

	cout << advancers;
	return 0;
}