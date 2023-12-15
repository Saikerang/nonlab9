#include<iostream>
#include<iomanip>
#include<cmath>//For using setw(), setprecision(), ...
using namespace std;

int main(){
    double money ,interest ,pay;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	int n= 0;
	while(money > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n+1; 
	cout << setw(13) << left << money;
	cout << setw(13) << left << money*(interest/100);
	money=money+(money*(interest/100));
	cout << setw(13) << left << money;
	if(money>pay){
	cout << setw(13) << left << pay;
	}
	else{
	    pay=money;
	    cout << setw(13) << left << pay;
	}
	money=money-pay;
	cout << setw(13) << left << money;
	cout << "\n";	
	n=n+1;
	}
	
	return 0;
}