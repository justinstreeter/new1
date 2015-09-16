#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// init vars

	float total;
	int people;
	float rate;
	float tip;
	float tipPlus;

	//ask for total

	cout << "Enter bill total" << endl;

	//collect total

	cin >> total;

	//ask for people

	cout << "Enter number of people" << endl;

	// collect people

	cin >> people;

	// ask for tip percent

	cout << "enter tip percent eg. 15 , 20." << endl;

	// collect tip percent

	cin >> rate;

	// if splitting with others / by people else don't

	if (people > 1){

		// find tip amount per person

		tip = (total * (rate / 100)) / people;

		// find tip plus total amount per person

		tipPlus = (total * (rate / 100) + total) / people;
		// display tip and tip plus each

		cout << setprecision(2) << fixed << "Your tip amount each is $" << tip << " and your tip plus total each is $" << tipPlus << endl;

	}else{
		// find tip amount

		tip = total * (rate / 100);

		// find tip plus total

		tipPlus = total * (rate / 100) + total;

		// display tip and tip plus

		cout << setprecision(2) << fixed <<"Your tip amount is $" << tip << " and your tip plus total is $" << tipPlus << endl;

	};


}
