//This program will calculate Arbys Inventory 

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Calculates freezer items for inventory  
void Freezer(double &ChickenBreast, double &Subroll, double &MiniBuns, double &StarBuns, double &JalapenoPoppers, double &MozzarellaSticks, double &CherryTurnover, double &AppleTurnover, double &HoneywheatBread, double &TripleChocolateCookie, double &SaltyChocolateCookie, double &MarbleRye, double &ChickenFingers, double &GreekGyro, double &CurlyFries)
{
	double ChickenBreast1, Subroll1, MiniBuns1, StarBuns1, JalapenoPoppers1, MozzarellaSticks1, CherryTurnover1, AppleTurnover1, HoneywheatBread1, TripleChocolateCookie1, SaltyChocolateCookie1, MarbleRye1, ChickenFingers1,
		GreekGyro1, CurlyFries1;
	double ChickenBreast2, Subroll2, MiniBuns2, StarBuns2, JalapenoPoppers2, MozzarellaSticks2, CherryTurnover2, AppleTurnover2, HoneywheatBread2, TripleChocolateCookie2, SaltyChocolateCookie2, MarbleRye2, ChickenFingers2,
		GreekGyro2, CurlyFries2;
	double ChickenBreast3, Subroll3, MiniBuns3, StarBuns3, JalapenoPoppers3, MozzarellaSticks3, CherryTurnover3, AppleTurnover3, HoneywheatBread3, TripleChocolateCookie3, SaltyChocolateCookie3, MarbleRye3, ChickenFingers3,
		GreekGyro3, CurlyFries3;
	cout << "Freezer Items in order: ChickenBreast, Subroll, Minibun, Starbun, JalapenoPopper, MozzarellaStick, CherryTurnover, AppleTurnover, Honeywheatbread, Triplechocolatecookie, SaltyChocolatecookie, "
		 << "MarbleRye, Chickenfingers, GreekGyro, Curlyfries. " << endl; 
	cout << "Please enter the freezer items in order by boxes/case. (enter zero if need be). " << endl;

	cin >> ChickenBreast1 >> Subroll1 >> MiniBuns1 >> StarBuns1 >> JalapenoPoppers1 >> MozzarellaSticks1 >> CherryTurnover1 >> AppleTurnover1 >> HoneywheatBread1 >> TripleChocolateCookie1 >> SaltyChocolateCookie1 >> MarbleRye1 >> ChickenFingers1 >>
		GreekGyro1 >> CurlyFries1;

	cout << "Please enter the freezer items in order by the bag (enter zero if need be). " << endl;

	cin >> ChickenBreast2 >> Subroll2 >> MiniBuns2 >> StarBuns2 >> JalapenoPoppers2 >> MozzarellaSticks2 >> CherryTurnover2 >> AppleTurnover2 >> HoneywheatBread2 >> TripleChocolateCookie2 >> SaltyChocolateCookie2 >> MarbleRye2 >> ChickenFingers2 >>
		GreekGyro2 >> CurlyFries2;

	cout << "Please enter the freezer items in order by individual pieces (enter zero if need be). " << endl;

	cin >> ChickenBreast3 >> Subroll3 >> MiniBuns3 >> StarBuns3 >> JalapenoPoppers3 >> MozzarellaSticks3 >> CherryTurnover3 >> AppleTurnover3 >> HoneywheatBread3 >> TripleChocolateCookie3 >> SaltyChocolateCookie3 >> MarbleRye3 >> ChickenFingers3 >>
		GreekGyro3 >> CurlyFries3;

	ChickenBreast = (ChickenBreast1 * 160) + (ChickenBreast2 * 20) + ChickenBreast3;
	Subroll = (Subroll1 * 72) + (Subroll2 * 6) + Subroll3;
	MiniBuns = (MiniBuns1 * 216) + (MiniBuns2 * 12) + MiniBuns3;
	StarBuns = (StarBuns1 * 96) + (StarBuns2 * 24) + StarBuns3;
	JalapenoPoppers = (JalapenoPoppers1 * 549) + (JalapenoPoppers2 * 61) + JalapenoPoppers3;
	MozzarellaSticks = (MozzarellaSticks1 * 351) + (MozzarellaSticks2 * 39) + MozzarellaSticks3;
	CherryTurnover = (CherryTurnover1 * 180) + (CherryTurnover2 * 60) + CherryTurnover3;
	AppleTurnover = (AppleTurnover1 * 180) + (AppleTurnover2 * 60) + AppleTurnover3;
	HoneywheatBread = (HoneywheatBread1 * 128) + (HoneywheatBread2 * 16) + HoneywheatBread3;
	TripleChocolateCookie = (TripleChocolateCookie1 * 105) + (TripleChocolateCookie2 * 35) + TripleChocolateCookie3;
	SaltyChocolateCookie = (SaltyChocolateCookie1 * 105) + (SaltyChocolateCookie2 * 35) + SaltyChocolateCookie3;
	MarbleRye = (MarbleRye1 * 128) + (MarbleRye2 * 16) + MarbleRye3;
	ChickenFingers = (ChickenFingers1 * 30) + (ChickenFingers2 * 5) + ChickenFingers3;
	GreekGyro = (GreekGyro1 * 30) + (GreekGyro2 * 5) + GreekGyro3;
	CurlyFries = (CurlyFries1 * 30) + (CurlyFries2 * 5) + CurlyFries3;


}

// Calculates Cooler items for inventory
void Cooler(double &Bacon, double &Swisscheese, double &Milk, double &Aquafina, double &Shakebase, double &Turkeyportion, double &Cornbeefportion, double &Brisketportion)
{
	double Bacon1, Swisscheese1, Milk1, Aquafina1, Shakebase1;
	double Bacon2, Swisscheese2, Milk2, Aquafina2, Shakebase2; 
	double Bacon3, Swisscheese3, Milk3, Aquafina3, Shakebase3; 


	cout << "Please enter the cooler items in order by the case (enter 0 if need be).  " << endl; 
	cin >> Bacon1 >> Bacon1 >> Swisscheese1 >> Milk1 >> Aquafina1 >> Shakebase1;

	cout << "Please enter the cooler items in order by the package (enter 0 if need be). " << endl; 
	cin >> Bacon2 >> Swisscheese2 >> Milk2 >> Aquafina2 >> Shakebase2; 

	cout << "Please enter the cooler items in order by individual pieces (enter 0 if need be). " << endl; 
	cin >> Bacon3 >> Swisscheese3 >> Milk3 >> Aquafina3 >> Shakebase3; 

	cout << "Please enter the meat portions in order by the number of containers (enter 0 if need be). " << endl; 
	cin >> Turkeyportion >> Cornbeefportion >> Brisketportion; 

	Bacon = (Bacon1 * 2000) + (Bacon2 * 400) + Bacon3; 
	Swisscheese = (Swisscheese1 * 240) + (Swisscheese2 * 20) + Swisscheese3; 
	Milk = (Milk2 * 48) + (Milk2 * 0) + Milk3; 
	Aquafina = (Aquafina1 * 35) + (Aquafina2 * 0) + Aquafina3; 
	Shakebase = (Shakebase1 * 5) + (Shakebase2 * 2.5) + Shakebase3; 

}

// Calculates Dry items for inventory 
void Dry(double &Regularbun, double &Onionbun, double &twentyOzcup, double &thirtyOzcup)
{
	double Regularbun1, Onionbun1, twentyOzcup1, thirtyOzcup1; 
	double Regularbun2, Onionbun2, twentyOzcup2, thirtyOzcup2;
	double twentyOzcup3, thirtyOzcup3;

	cout << "Please enter Regularbuns and Onionbuns by the package (enter zero when needed). " << endl; 
	cin >> Regularbun1 >> Onionbun1; 

	cout << "Please enter Regularbuns and Onionbuns by the individual (enter zero when needed). " << endl; 
	cin >> Regularbun2 >> Onionbun2;

	cout << "Please enter 20oz and 30oz cups by the case. (enter zero when needed) " << endl; 
	cin >> twentyOzcup1 >> thirtyOzcup1; 

	cout << "Please enter 20oz and 30oz cups by the sleeve. (enter zero when needed) " << endl; 
	cin >> twentyOzcup2 >> thirtyOzcup2;

	cout << "Please enter 20oz and 30oz cups by the sleeve. (enter zero when needed) " << endl;
	cin >> twentyOzcup2 >> thirtyOzcup2;

	cout << "Please enter 20oz and 30oz cups by the individual. (enter zero when needed) " << endl;
	cin >> twentyOzcup3 >> thirtyOzcup3;

	Regularbun = (Regularbun1 * 30) + Regularbun2; 
	Onionbun = (Onionbun1 * 20) + Onionbun2; 
	twentyOzcup = (twentyOzcup1 * 1200) + (twentyOzcup2 * 50) + twentyOzcup3; 
	thirtyOzcup = (thirtyOzcup1 * 860) + (thirtyOzcup2 * 43) + thirtyOzcup3; 


}

// Calculates Meat items for inventory 
void Meat(double &Beef, double &Turkey, double &Ham, double &Brisket, double &Cornbeef)
{
	double Beef1, Beef2, Turkey1, Ham1, Brisket1, Cornbeef1, Turkey2, Ham2, Brisket2, Cornbeef2; 

	cout << "Please enter the beef by the case. (enter zero when needed) " << endl; 
	cin >> Beef1; 

	cout << "Please enter the beef by the pieces. (enter zero when needed) " << endl; 
	cin >> Beef2;

	Beef = (Beef1 * 40) + (Beef2 * 10); 

	cout << "Please enter the number of cases and pieces of Turkey. " << endl; 
	cin >> Turkey1;
	cout << "Please enter the Turkey by the pound. " << endl; 

	for (int i = 0; i < Turkey1; i++)
	{
		cin >> Turkey2; 
		Turkey += Turkey2; 
	}

	cout << "Please enter the number of cases and pieces of Ham. " << endl; 
	cin >> Ham1; 
	cout << "Please enter the Ham by the pound. " << endl; 

	for (int i = 0; i < Ham1; i++)
	{
		cin >> Ham2; 
		Ham += Ham2; 
	}

	cout << "Please enter the number of cases and pieces of Brisket. " << endl; 
	cin >> Brisket1; 
	cout << "Please enter the Brisket by the pound. " << endl; 

	for (int i = 0; i < Brisket1; i++)
	{
		cin >> Brisket2; 
		Brisket += Brisket2; 
	}

	cout << "Please enter the number of cases and pieces of Cornbeef. " << endl;
	cin >> Cornbeef1; 
	cout << "Please enter the Cornbeef by the pound. " << endl; 

	for (int i = 0; i < Cornbeef1; i++)
	{
		cin >> Cornbeef2; 
		Cornbeef += Cornbeef2; 
	}

}

void Change()
{

}

// Displays menu option 
void showmenu()
{
	cout << "1. Calculate Arbys Inventory. \n"
		<< "2. Change Inventory. \n"
		<< "3. End the program. \n" << endl;
}

int main()
{
	ofstream ArbysFile; 
	int ans; 
	bool program = true; 
	string yesno, filename, date; 
	const int Size = 32;
	double ChickenBreast = 0, Subroll = 0, MiniBuns = 0, StarBuns = 0, JalapenoPoppers = 0, MozzarellaSticks = 0, CherryTurnover = 0, AppleTurnover = 0, HoneywheatBread = 0, TripleChocolateCookie = 0;
	double SaltyChocolateCookie = 0, MarbleRye = 0, ChickenFingers = 0;
	double GreekGyro = 0, CurlyFries = 0;
	double Bacon = 0, Swisscheese = 0, Milk = 0, Aquafina = 0, Shakebase = 0, Turkeyportion = 0, Cornbeefportion = 0, Brisketportion = 0;
	double Regularbun = 0, Onionbun = 0, twentyOzcup = 0, thirtyOzcup = 0; 
	double Beef = 0, Turkey = 0, Ham = 0, Brisket = 0, Cornbeef = 0; 
	string ItemName[Size] = { "ChickenBreast", "Bacon", "Regularbun", "Onionbun", "Subroll", "MiniBuns", "StarBuns", "Swisscheese", "JalapenoPoppers", "MozzarellaSticks", "CherryTurnover", "AppleTurnover", "HoneywheatBread","TripleChocolateCookie",
	"SaltyChocolateCookie", "MarbleRye", "Milk", "Aquafina", "twentyOzcup", "thirtyOzcup", "Turkeyportion", "Cornbeefportion", "Brisketportion", "Beef", "Turkey", "Ham", "ChickenFingers", "Brisket", "GreekGyro", "CurlyFries", "Cornbeef", "Shakebase" }; 

	cout << "What would you like to do today? " << endl;
	showmenu(); 

	cin >> ans;

	do
	{


		if (ans == 1)
		{

			cout << "Please name your inventory text file. Dont forget to use .txt after the name. \n" << endl;
			cin >> filename;
			cout << "Please enter today's date by the month/day/year. Ex: 05/17/2019. " << endl;
			cin >> date;
			cout << " " << endl;

			Freezer(ChickenBreast, Subroll, MiniBuns, StarBuns, JalapenoPoppers, MozzarellaSticks, CherryTurnover, AppleTurnover, HoneywheatBread, TripleChocolateCookie,
				SaltyChocolateCookie, MarbleRye, ChickenFingers, GreekGyro, CurlyFries);

			Cooler(Bacon, Swisscheese, Milk, Aquafina, Shakebase, Turkeyportion, Cornbeefportion, Brisketportion);

			Dry(Regularbun, Onionbun, twentyOzcup, thirtyOzcup);

			Meat(Beef, Turkey, Ham, Brisket, Cornbeef); 
			
		}

		else if (ans == 2)
		{
			break; 
		}

		else if (ans == 3)
		{
			break; 
		}

		else
		{
			cout << "You did not enter one of the following options. " << endl;
			cout << "Please enter one of the following options. \n " << endl; 
			showmenu(); 
			cin >> ans; 
			continue; 
		}

		ArbysFile.open(filename);

		if (ArbysFile)
		{
			double inventory[Size] = { ChickenBreast, Bacon, Regularbun, Onionbun, Subroll, MiniBuns, StarBuns, Swisscheese, JalapenoPoppers, MozzarellaSticks, CherryTurnover, AppleTurnover, HoneywheatBread,TripleChocolateCookie,
			SaltyChocolateCookie, MarbleRye, Milk, Aquafina, twentyOzcup, thirtyOzcup, Turkeyportion, Cornbeefportion, Brisketportion, Beef, Turkey, Ham, ChickenFingers, Brisket, GreekGyro, CurlyFries, Cornbeef, Shakebase };

			cout << "Writing Inventory to " << filename << "." << endl;

			ArbysFile << "Arbys Inventory         Date: " << date << "\n \n" << endl;
			
			for (int count = 0; count < Size; count++)
			{
				ArbysFile << ItemName[count] << ": " << inventory[count] << " (by the individual pieces or pounds)" << endl; 
			}

			cout << "All done. Now closing file." << endl;
			ArbysFile.close();
		}

		else
		{
			cout << filename << " did not open successfully. " << endl;
			cout << "Program is ending now. " << endl;
			break;
		}

		cout << "Would you like to use the program again? Enter yes or no. \n" << endl;
		cin >> yesno;
		

		if (yesno == "no" || yesno == "No" || yesno == "NO")
		{
			cout << "Thank you for using Jacob's Program. Have a nice day! " << endl; 
			program = false;
		}

		else if (yesno == "yes" || yesno == "Yes" || yesno == "YES")
		{
			cout << "Please enter one of the options." << endl;
			cin >> ans;
		}

		else
		{
			cout << "You did not enter yes or no. The program will end now. " << endl;
			break;
		}

	} while (program != false);


	
	system("pause");
	return 0;

}