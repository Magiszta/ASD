#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	int tab[100];
	cout<<"podaj liczbe elemntow tablicy n: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"podaj kolejne kolejny element tablicy: ";
		cin>>tab[i];
	}
	
	for(j=1; j<n; j++)// od drugiego elemntu tablicy
	{
		temp=tab[j]; //pomocnicza
		i=j-1;//indeks porzedniego elementu
		while ((i>=0) && (tab[i]>temp))//porownanie porzedniego elentu z kolejnym i gdy istnieje poprzednik
		{
			tab[i+1]=tab[i]; //przesuniecie w prawo
			i=i-1; //cofniecie sie
		}
		tab[i+1]=temp;
	}
	
	cout<<"liczby posortowane"<<endl;
	for(i=0;i<n;i++)
	    cout<<tab[i]<<"  ";
	   
	   
 return 0;

}
