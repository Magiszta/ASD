#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

main()
{
	int tab[100], i,j, n, min;
	
	cout<<"Podaj liczbe elemntow tablicy n: ";		
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
	
	cout<<"Podaj kolejny elemnt tablicy: ";
	cin>>tab[i];
	
	}	
	
	
	for(i = 0; i < n-1; i++)
	{
		min = i;//indeks dla najmnieszego znalezionego elemntu
		for(j = i + 1; j < n; j++)
			{
				if(tab[j]<tab[min])
					min = j;//jezeli znajdzeimy mniejszy elemnt
			}
		
		swap(&tab[i], &tab[min]); // zamiana bie¿acego elemntu na najmnieszy z reszt tablicy		
	}
		
		
		
	for(i = 0; i < n; i++)
	cout<<tab[i]<<" ";
	
		
	return 0;
}

