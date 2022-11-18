#include <iostream>
#include <string>

using namespace std;


class Bank {
	
	
	
	// Private variables used inside class
private:
	string name;
	long long accnumber;
	char type[10];
	long long amount = 0;
	long long tot = 0;

	
	
	// Public variables
public:
	// Function to set the person's data
	void setvalue()
	{
		cout << "Enter name\n";
		cin.ignore();
		// To use space in string
		getline(cin, name);
		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}
	// Function to display the required data
	void accountinfo()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}
	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}
	// Function to show the balance amount
	void showbal()
	{
		tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}
	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};
// Driver Code




int main()
{
	char choice; //for choosing what to operate

	Bank data; //creating an object of the class bank

	cout << "Welcome" << endl;
	
	while (1) {
		cout << "Enter Your Choice" << endl;


		cout << "1. Get Account information" << endl;
		cout << "2. Balance Enquiry" << endl;
		cout << "3. Deposit Money" << endl;
		cout << "4. Show Total balance" << endl;
		cout << "5. Withdraw Money" << endl;
		cout << "6. Cancel" << endl;
		//menu interference on console

		cin >> choice;
		//choice that user chose
		if (choice > 0 && choice <= 6)
		{
			switch (choice) {
			case 1:
				b.setvalue();
				break;
			case 2:
				b.showdata();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.showbal();
				break;
			case 5:
				b.withdrawl();
				break;
			case 6:
				exit(1);
				break;
			default:
				cout << "\nInvalid choice\n";
			}

		}
	}

}