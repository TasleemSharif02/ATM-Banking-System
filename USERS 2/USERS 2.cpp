#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct users
{
	string name;
	string pincode;

};

int main()
{

	users obj[8];
	ifstream in("users.txt");

	for (int i = 0; i < 8; i++)
	{
		in >> obj[i].name;
		in >> obj[i].pincode;

	}

	system("color 17");
	cout << "\n=====================================" << endl;
	cout << "ATM MANAGEMENT SYSTEM" << endl;
	cout << "=====================================\n\n" << endl;

	string username;
	string password;
	cout << "Enter username : ";
	getline(cin, username);
	cout << "Enter password : ";
	getline(cin, password);


	for (int i = 0; i < 8; i++)
	{
		if (password == obj[i].pincode)
		{
			for (int i = 1; i <= 10; i++)
			{
				if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9 || i == 10)
					cout << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << "\nWelcome user" << endl;

					for (int i = 1; i <= 10; i++)
					{
						double withdraw, deposit, moneytransfer, billpayment, balance1;
						int option;
						balance1 = 50000;
						cout << endl;
						cout << "\nChoose a Transaction:\n\n";

						cout << "     MAIN SCREEN    \n";
						cout << "[1] Inquire Balance \n";
						cout << "[2] Withdraw \n";
						cout << "[3] Deposit \n";
						cout << "[4] Bill payment \n";
						cout << "[5] Quit \n";
						cout << "\n";
						cout << "Enter Option:";
						cin >> option;
						switch (option)
						{
						case 1:
							cout << "\n BALANCE INQUIRY\n";
							cout << "\n Your current balance is RS: " << balance1 << endl;
							continue;
						case 2:
							cout << "\n WITHDRAW \n";
							cout << "Enter amount in RS: ";
							cin >> withdraw;
							if (withdraw > balance1)
							{
								cout << "You do not have enough balance for this withdrawal";
								cout << "\nYour current balance is RS: " << balance1 << endl;
								continue;
							}
							balance1 = balance1 - withdraw;
							cout << "You withdrew RS: " << withdraw << endl;
							cout << "Your remaining balance is RS: " << balance1 << endl;
							continue;
						case 3:
							cout << "\nDEPOSIT \n";
							cout << "Enter amount in RS: ";
							cin >> deposit;
							balance1 = balance1 + deposit;
							cout << "You deposited RS: " << deposit << endl;
							cout << "Your new balance is RS: " << balance1 << endl;
							continue;

						case 4:
							cout << "Bill payment \n";
							cout << "Enter amount in RS: ";
							cin >> billpayment;
							balance1 = balance1 - billpayment;
							cout << "Bill payment successfully\n";
							cout << "Current balance is " << balance1;
							continue;

						case 5:
							cout << "\n***[[[% EXIT MODE %]]]***\n";
							system("cls");
							continue;
						default:
							cout << "ERROR! Enter correct option." << endl;
							continue;
						}

						break;

					}
					break;
				}

			}


		}
	}
}