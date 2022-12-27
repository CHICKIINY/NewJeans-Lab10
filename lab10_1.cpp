#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,rate,amount;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year = 1;
	double pb,i,t,nb;
	while(1)
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	pb = loan; 
	cout << setw(13) << left << pb;
	i = pb*(rate/100);
	cout << setw(13) << left << i;
	t = pb + i;
	cout << setw(13) << left << t;
	if(t < amount){
		amount = t;
	}
	cout << setw(13) << left << amount;
	nb = t - amount;
	cout << setw(13) << left << nb;
	cout << "\n";
	year++;
	loan = nb;
	if(nb == 0)break;
	}	
	
	return 0;
}
