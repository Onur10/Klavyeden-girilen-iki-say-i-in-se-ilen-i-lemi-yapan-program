// ConsoleApplication3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


#include <iostream>
using namespace std;



int main()
{
	int sayi1, sayi2, sonuc;
	char islem;

	cout << "birinci sayiyi girin : " << endl;
	cin >> sayi1;
	cout << "ikinci sayiyi girin : " << endl;
	cin >> sayi2;
	cout << "islem seciniz + - * / " << endl;
	cin >> islem;

	if (islem =='+')
	{
		sonuc = sayi1 + sayi2;
		cout << "Sonuc : " << sonuc << endl;
	}
	else if (islem=='-')
	{
		sonuc = sayi1 - sayi2;
		cout << "Sonuc : " << sonuc << endl;
	}
	else if (islem=='*')
	{
		sonuc = sayi1 * sayi2;
		cout << "Sonuc : " << sonuc << endl;
	}
	else
	{
		sonuc = sayi1 / sayi2;
		cout << "Sonuc : " << sonuc << endl;
	}
	system("pause");
	return 0;
}

