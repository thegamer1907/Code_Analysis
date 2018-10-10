#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char v[105];
	cin >> v;
	int a = strlen(v), b;

	int quant[3];
	for (int i = 0; i < 3; i++){
		cin >> b;
		quant[i] = b;
	}

	int preco[3];
	for (int i = 0; i < 3; i++){
		cin >> b;
		preco[i] = b;
	} 

	long long dinheiro;
	cin >> dinheiro;

	int porBurger[3];
	for (int i = 0; i < 3; i++)
		porBurger[i] = 0;

	for (int i = 0; i < a; i++)
	{
		if (v[i] == 'B')
			porBurger[0] += 1;
		else if (v[i] == 'S')
			porBurger[1] += 1;
		else
			porBurger[2] += 1;
	}


	long long total = 0;
	while ((quant[0] > 0 && porBurger[0] > 0)|| (quant[1] > 0 && porBurger[1] > 0) || (quant[2] > 0 && porBurger[2] > 0))
	{
		for (int i = 0; i < 3; i++)
		{
			if (quant[i] < porBurger[i]){
				dinheiro -= preco[i]*(porBurger[i] - quant[i]);
				quant[i] = porBurger[i];
			}

			quant[i] -= porBurger[i];
		}


		if (dinheiro < 0){
			cout << total << endl;
			return 0;
		}
		else if (dinheiro == 0){
			cout << total + 1 << endl;
			return 0;
		}

		total++;
	}

	long long precoDoBurger = 0;
	for (int i = 0; i < 3; i++)
		precoDoBurger += preco[i]*porBurger[i];

	total += dinheiro/precoDoBurger;

	cout << total << endl;


	return 0;
}