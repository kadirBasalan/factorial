#include <iostream.h>
#include <conio.h>

main()
{
int sayi,faktoriyel;

	cout << " Lutfen bir sayi giriniz :  ";
	cin >> sayi;

	for (int c=sayi; c >= 1; c--)
	{
	faktoriyel*=c;
	}

cout << " Sonuc : "<<faktoriyel;

getch();
}
