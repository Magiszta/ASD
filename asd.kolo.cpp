#include <iostream>

using namespace std;

main()
{
	int tab[1000][2], i, j, T, pole;
cout<<"Podaj liczbe liczbe testow T z przedzia³u <1,100>: ";
cin>>T;

while(T> 1000 || T<1)
{
	cout<<"Blad podaj liczbe T z przedzia³u <1,100>";
	cin>>T;
}
	for(i = 0; i< T;i++)
	{
		
		cout<<"Podaj dlugosc bokow a i b po spacji: ";
		for(j=0; j <2; j++)
		{
		
		
		cin>>tab[i][j];
		}	
	}


	for(i=0; i<T; i++)
	{
		pole =1;
		
		for(j=0; j<2;j++)
			pole=pole*tab[i][j];
			
			
		cout<<"Pole lusterka nr "<<i+1<<" to: "<<pole<<endl;
	}

	return 0;


}
