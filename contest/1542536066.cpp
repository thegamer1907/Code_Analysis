#include<iostream>
#include<string>
using namespace std;

class problem
{
public:
	void idea()
	{
		input();
		preparing();
		output();
	}

private:
	int num_problem,exper;
	int **arr;
	int *k,**K;
	string ans;

	void input()
	{
		scanf("%i %i",&num_problem,&exper);
		arr=new int *[num_problem];
		for(int i=0;i<num_problem;i++) {arr[i]=new int [exper]; for(int j=0;j<exper;j++) scanf("%i",&arr[i][j]);}
		k=new int [exper]; K=new int *[exper]; for(int i=0;i<exper;i++) K[i]=new int [exper]; relations();
	}

	void relations()
	{
		for(int i=0;i<exper;i++) for(int j=0;j<exper;j++) K[i][j]=1;
		for(int i=0;i<exper;i++)
			for(int j=0;j<num_problem;j++)
				for(int l=0;l<exper;l++) if(arr[j][i]==0 && arr[j][l]==0) {K[i][i]=0; K[i][l]=0;}
	}

	void preparing()
	{
		ans="NO";
		for(int zero=exper;zero>=(exper/2.0);zero--) find(zero);
	}

	void find(int zero)
	{
		for(int i=0;i<num_problem;i++)
		{
			int zer=0,one=0; for(int j=0;j<exper;j++) k[j]=0;
			for(int j=0;j<exper;j++) if(arr[i][j]==0) zer++;
			if(zer==zero) for(int j=0;j<exper;j++) if(arr[i][j]==1) {k[j]=1; one++;}

			if(zer==zero && one==0) ans="YES";
			if(one==1) for(int j=0;j<exper;j++) if(k[j]==1) if(K[j][j]==0) ans="YES";
			if(one==2) for(int j=0;j<exper;j++) if(k[j]==1) for(int l=j+1;l<exper;l++) if(k[l]==1) if(K[j][l]==0) ans="YES";
		}
	}

	void output()
	{
		cout<<ans<<endl;
	}
};

int main()
{
	problem test;
	test.idea();

	//system("pause");
	return 0;
}