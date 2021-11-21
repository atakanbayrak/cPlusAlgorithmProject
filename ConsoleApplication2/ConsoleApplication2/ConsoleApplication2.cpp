#include <iostream>
#include <cstring>
#include <string>


using namespace std;
int main()
{
	//Sonuç ekranında Türkçe karakter kullanabilmek için 

	string sehir[81] = { "adana","adiyaman","afyonkarahisar","agri","aksaray","amasya","ankara","antalya","ardahan","artvin","aydin","balikesir","bartin","batman","bayburt","bilecik","bingol","bitlis","bolu","burdur","bursa","canakkale","cankiri","corum","denizli","diyarbakir","duzce","edirne","elazig","erzincan","erzurum","eskisehir","gaziantep","giresun","gumushane","hakkari","hatay","igdir","isparta","istanbul","izmir","kahramanmaras","karabuk","karaman","kars","kastamonu","kayseri","kirikkale","kirklareli","kirsehir","kilis","kocaeli","konya","kutahya","malatya","manisa","mardin","mersin","mugla","mus","nevsehir","nigde","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","sirnak","tekirdag","tokat","trabzon","tunceli","sanliurfa","usak","van","yalova","yozgat","zonguldak" };

	string enuzunsehir = sehir[0];
	string enkisasehir = sehir[0];

	int n = 80;
	int i = 0;

	for (i = 0; i < n; i++)
	{

		if (sehir[i].length() > enuzunsehir.length())
		{
			enuzunsehir = sehir[i];
		}
		if (sehir[i].length() < enkisasehir.length())
		{
			enkisasehir = sehir[i];
		}



	}


	cout << "En uzun sehir:" << enuzunsehir << endl;
	cout << "En kisa sehir :" << enkisasehir << endl;
	cout << "--------------------------------" << endl;
	cout << "Lutfen Bekleyeniz..." << endl;
	int minimum = enkisasehir.length();


	bool kosul = true;


	
	string bulIller[81] = {};
	int IlSayisi= 0;
	for (int p = 3; p < 14; p++) {

				

		for (int g = 0; g < 100000; g++) {


				string iller[14];


				for (int a = 0; a < p; a++) {

					int rnd = rand() % 81;

					string bdegisken = sehir[rnd];
					iller[a] = bdegisken;



				}

				// ilerin en küçüğünü bulma
				string enkisail = iller[0];
				int enKisaIlUzunluk = enkisail.length();

				for (int t = 0; t < p; t++)
				{
					if (iller[t].length() < enKisaIlUzunluk)
					{

						enKisaIlUzunluk = iller[t].length();


					}



				}


				string yeniIl;
				bool kosul3 = true;
				for (int f = 0; f < enKisaIlUzunluk; f++) {



					for (int fe = 0; fe < p; fe++) {


						//str = iller[fe].substr(f,1);
						yeniIl.append(iller[fe].substr(f, 1));
						//yeniIl.append(str);				
					}

					//cout << yeniIl << endl;
					for (int b = 0; b < 81; b++) {
						if (sehir[b] == yeniIl) {
							
							for (int z = 0; z < 81; z++) {
								if (yeniIl == bulIller[z]) {
									kosul3 = false;
									break;
								}
								else {
									kosul3 = true;
								}
								
								
							}
							if (kosul3 == true) {
								bulIller[IlSayisi] = yeniIl;
								cout << "Il Listeye Eklendi!" << endl;
								IlSayisi++;
							}
							//cout << yeniIl << endl;
							break;
							cout << "Il bulundu" << endl;


						}
						else {
							//cout << "Bulunamadi" << endl;
						}
					}
					
					//cout << "---------------" << endl;
					yeniIl = "";

				}



				//cout << yeniIl << endl;
			
		}
		/*cout << "XXXXXXXXXX" << endl;
		cout << "BULUNAMADI BULUNAMADI BULUNAMADI" << endl;
		cout << "XXXXXXXXXX" << endl;*/
		
	}
	cout << "--------------------------------" << endl;
	int miktarUc= 0;
	int miktarDort = 0;
	int miktarBes = 0;
	int miktarAlti = 0;
	int miktarYedi = 0;
	int miktarSekiz = 0;
	for (int s = 0; s <81; s++) {

		if (bulIller[s].length() == 3) {
			cout << "3 Harfli --------------> " << bulIller[s] << endl;
			miktarUc++;
		}
		else if (bulIller[s].length() == 4) {
			cout << "4 Harfli --------------> " << bulIller[s] << endl;
			miktarDort++;
		}
		else if (bulIller[s].length() == 5) {
			cout << "5 Harfli --------------> " << bulIller[s] << endl;
			miktarBes++;
		}
		else if (bulIller[s].length() == 6) {
			cout << "6 Harfli --------------> " << bulIller[s] << endl;
			miktarAlti++;
		}
		else if (bulIller[s].length() == 7) {
			cout << "7 Harfli --------------> " << bulIller[s] << endl;
			miktarYedi++;
		}	
			
	}
	cout << "--------------------------------" << endl;
	if (miktarUc != 0) {
		cout << "3 Harfli Il Sayisi: " << miktarUc << endl;
	}
	else {
		cout << "3 Harfli Il Sayisi: Bulunamadi!" << endl;
	}

	if (miktarDort != 0) {
		cout << "4 Harfli Il Sayisi: " << miktarDort << endl;
	}
	else {
		cout << "4 Harfli Il Sayisi: Bulunamadi!" << endl;
	}

	if (miktarBes != 0) {
		cout << "5 Harfli Il Sayisi: " << miktarBes << endl;
	}
	else {
		cout << "5 Harfli Il Sayisi: Bulunamadi!" << endl;
	}

	if (miktarAlti != 0) {
		cout << "6 Harfli Il Sayisi: " << miktarAlti << endl;
	}
	else {
		cout << "6 Harfli Il Sayisi: Bulunamadi!" << endl;
	}

	if (miktarYedi != 0) {
		cout << "7 Harfli Il Sayisi: " << miktarYedi << endl;
	}
	else {
		cout << "7 Harfli Il Sayisi: Bulunamadi!" << endl;
	}
	
	return 0;
}