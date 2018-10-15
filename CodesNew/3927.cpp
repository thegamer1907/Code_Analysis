#include<iostream>
#include <vector>

using namespace std;
#define ull unsigned long long int 

int main()
{

int pocet_vojaku;
int pocet_minut;

cin >> pocet_vojaku;
cin >> pocet_minut;

ull tmp_vojak = 0;
ull prom = 0;
vector<ull> pole_vojaci;
vector<ull> pole_utoky;


for(int i = 0; i < pocet_vojaku; i++)
{
	cin >> prom;
	tmp_vojak = tmp_vojak + prom;
	pole_vojaci.push_back(tmp_vojak);	
}

for(int i = 0; i < pocet_minut; i++)
{
	cin >> prom;
	pole_utoky.push_back(prom);
}

int start = 0;
int konec = pocet_vojaku-1;
int stred = 0;
int vysledek = 0;

//int tmp = pocet_vojaku;
ull utok = 0;
for(int i = 0; i < pocet_minut; i++)
{
	start = 0;
	konec = pocet_vojaku -1;
	stred = 0;
	utok = utok + pole_utoky[i];
	//cout << "utok je " << utok << ";";
	if(utok >= pole_vojaci[pocet_vojaku-1])
	{
		cout << pocet_vojaku << endl;
		utok = 0;
		continue;
	}
	else
	{
		while(1)
		{
			stred = (start + konec)/2;
			if(utok < pole_vojaci[stred])
			{
				konec = stred -1;				
			}

			if(utok > pole_vojaci[stred])
			{
				start = stred +1 ;				
			}

			if(utok == pole_vojaci[stred])
			{
				vysledek = pocet_vojaku - stred;
				vysledek--;
				cout << vysledek << endl;
				//cout << "utok je" << utok;
				break;
			}
			if(start + 1 == konec || start == konec)
			{
				if(pole_vojaci[start] > utok)
				{
					vysledek = pocet_vojaku -start;
					cout << vysledek << endl;			
					break;
				}

				if(pole_vojaci[start] <= utok)
				{
					vysledek = pocet_vojaku - start - 1;
					if(pole_vojaci[(start+1)] <= utok)
						vysledek--; 
					cout << vysledek << endl;
					break;
				}

			}
		}

	}

}
return 0;


}