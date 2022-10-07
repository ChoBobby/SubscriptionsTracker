#include<iostream>

using namespace std;

int main() {
	int numSubs = 0;

	bool netSub = false;
	double netSubCost = 9.99;

	bool spotSub = false;
	double spotSubCost = 9.99;

	bool gymSub = false;
	double gymSubCost = 9.99;

	bool custSub1B = false;
	string custSub1;
	double custSub1Cost = 0;

	bool custSub2B = false;
	string custSub2;
	double custSub2Cost = 0;

	bool custSub3B = false;
	string custSub3;
	double custSub3Cost = 0;

	bool custSub4B = false;
	string custSub4;
	double custSub4Cost = 0;

	bool custSub5B = false;
	string custSub5;
	double custSub5Cost = 0;
	
	cout << " ==============================================================================================" << endl;
	cout << "||                              Welcome to Subsciptions Tracker!                               ||" << endl;
	cout << "||   Here, you can add all your subsciptions & billed purchases to better manage your money.   ||" << endl;
	cout << " ==============================================================================================" << endl << endl;

	int choice = -1;
	int i = 1;

	do {
		double costMonth = 0;
		double costYear = 0;
		cout << endl << "--------------------------------------" << endl;
		cout << " Subscriptions Tracker v1.0 MAIN MENU" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1 - Add a Subscription" << endl;
		cout << "2 - Create Custom Subscription" << endl;
		cout << "3 - View Subsciptions / Cost" << endl;
		cout << "0 - Quit Application" << endl << endl;
		cout << "Select one of the above." << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << endl << "--------------------" << endl;
			cout << " Add a Subscription" << endl;
			cout << "--------------------" << endl;
			cout << "1 - Netflix:	$9.99" << endl;
			cout << "2 - Spotify:	$9.99" << endl;
			cout << "3 - Gym:	$9.99" << endl;
			cout << "0 - Return to Menu" << endl << endl;
			cout << "Select one of the above." << endl;

			int choiceCase1;
			cin >> choiceCase1;

			switch (choiceCase1) {
			case 1:
				cout << endl << "*Netflix has been added to your subscriptions.*" << endl;
				netSub = true;
				++numSubs;
				break;

			case 2:
				cout << endl << "*Spotify has been added to your subscriptions.*" << endl;
				spotSub = true;
				++numSubs;
				break;

			case 3:
				cout << endl << "*Gym Membership has been added to your subscriptions.*" << endl;
				gymSub = true;
				++numSubs;
				break;

			case 0:
				break;
			}
			break;

		case 2:
			cout << endl << "---------------------------" << endl;
			cout << " Create Custom Subsciption" << endl;
			cout << "---------------------------" << endl;
			cout << "1 - Create New" << endl;
			cout << "0 - Return to Main Menu" << endl << endl;
			cout << "Select one of the above." << endl;

			int choiceCase2;
			cin >> choiceCase2;

			switch (choiceCase2) {
			case 1:
				while (i <= 6) {
					if (i == 1) {
						cout << endl << "Create a name for your subscription. (No spaces)" << endl;
						cout << "Name: ";
						cin >> custSub1;
						cout << "Enter your subscriptions monthly fee." << endl;
						cout << "Cost: $";
						cin >> custSub1Cost;
						cout << endl << "*" << custSub1 << " has been added to your subcriptions.*" << endl;

						custSub1B = true;
						++numSubs;
						++i;
						break;
					}
					else if (i == 2) {
						cout << endl << "Create a name for your subscription. (No spaces)" << endl;
						cout << "Name: ";
						cin >> custSub2;
						cout << "Enter your subscriptions monthly fee." << endl;
						cout << "Cost: $";
						cin >> custSub2Cost;
						cout << endl << "*" << custSub2 << " has been added to your subcriptions.*" << endl;

						custSub2B = true;
						++numSubs;
						++i;
						break;
					}
					else if (i == 3) {
						cout << endl << "Create a name for your subscription. (No spaces)" << endl;
						cout << "Name: ";
						cin >> custSub3;
						cout << "Enter your subscriptions monthly fee." << endl;
						cout << "Cost: $";
						cin >> custSub3Cost;
						cout << endl << "*" << custSub3 << " has been added to your subcriptions.*" << endl;

						custSub3B = true;
						++numSubs;
						++i;
						break;
					}
					else if (i == 4) {
						cout << endl << "Create a name for your subscription. (No spaces)" << endl;
						cout << "Name: ";
						cin >> custSub4;
						cout << "Enter your subscriptions monthly fee." << endl;
						cout << "Cost: $";
						cin >> custSub4Cost;
						cout << endl << "*" << custSub4 << " has been added to your subcriptions.*" << endl;

						custSub4B = true;
						++numSubs;
						++i;
						break;
					}
					else if (i == 5) {
						cout << endl << "Create a name for your subscription. (No spaces)" << endl;
						cout << "Name: ";
						cin >> custSub5;
						cout << "Enter your subscriptions monthly fee." << endl;
						cout << "Cost: $";
						cin >> custSub5Cost;
						cout << endl << "*" << custSub5 << " has been added to your subcriptions.*" << endl;

						custSub5B = true;
						++numSubs;
						++i;
						break;
					}
					else {
						cout << endl << "ERROR: Maximum number of custom subscriptions reached." << endl;
						break;
					}
				}

			case 0:
				break;
			}
			break;

		case 3:
			cout << endl << "---------------------------" << endl;
			cout << " View Subscriptions / Cost" << endl;
			cout << "---------------------------" << endl;

			if (netSub) {
				cout << "Netflix: $" << netSubCost << endl;
				costMonth += netSubCost;
			}
			if (spotSub) {
				cout << "Spotify: $" << spotSubCost << endl;
				costMonth += spotSubCost;
			}
			if (gymSub) {
				cout << "Gym: $" << gymSubCost << endl;
				costMonth += gymSubCost;
			}
			if (custSub1B) {
				cout << custSub1 << ": $" << custSub1Cost << endl;
				costMonth += custSub1Cost;
			}
			if (custSub2B) {
				cout << custSub2 << ": $" << custSub2Cost << endl;
				costMonth += custSub2Cost;
			}
			if (custSub3B) {
				cout << custSub3 << ": $" << custSub3Cost << endl;
				costMonth += custSub3Cost;
			}
			if (custSub4B) {
				cout << custSub4 << ": $" << custSub4Cost << endl;
				costMonth += custSub4Cost;
			}
			if (custSub5B) {
				cout << custSub5 << ": $" << custSub5Cost << endl;
				costMonth += custSub5Cost;
			}

			costYear = costMonth * 12;

			cout << endl << "Amount spent per month:	$" << costMonth << endl;
			cout << "Amount spent per year:	$" << costYear << endl;
			cout << endl << "Input 0 to return to main menu." << endl;

			int caseChoice3;
			cin >> caseChoice3;

			switch (caseChoice3) {
			case 0:
				break;
			}
			break;

		case 0:
			cout << endl << "Goodbye." << endl;
		}

	} while (choice != 0);

	return 0;
}
