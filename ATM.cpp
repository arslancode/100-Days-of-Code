#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void security(int pin, int acc_no,string phone_no, int two_fac, bool access){
	cout<<"Welcome!"<<endl;
	cout<<"Enter Account Number"<<endl;
	cin>>acc_no;
	if(acc_no == 3452){
		cout<<"Enter Pin"<<endl;
		cin>>pin;
		if(pin == 4498){
			cout<<"Enter OTP sent on "<<phone_no<<endl;
			cin>>two_fac;
			if(two_fac == 1235){
				access = true;
			}
			else{
				cout<<"Wrong Two factor OTP entered"<<endl;
				cout<<"Account Freezed!"<<endl;
				cout<<"Visit your Bank Branch ASAP!"<<endl;
			}
		}
		else{
			cout<<"Wrong Pin Entered, Try Again!"<<endl;
		}
	}
	else{
		cout<<"Wrong Account Number Entered, Try Again!"<<endl;
	}
	
	
}

float balance_info(float balance){
	cout<<"Your current account balance is Rs "<<balance<<endl;
}

float deposit(float balance, float deposit_amount){
	cout<<"Enter Amount to be deposited: "<<endl;
	cin>>deposit_amount;
	balance = balance + deposit_amount;
	cout<<"Deposit successful!"<<endl;
	cout<<"Your new account balance is Rs "<<balance<<endl;
		
}

float withdrawal(float balance, float amount){
	cout<<"Enter Withdraw Amount:"<<endl;
	cin>>amount;
	if(amount < balance){
		balance = balance - amount;
		cout<<"Withdraw Successful!"<<endl;
		cout<<"Please collect cash from cash dispenser"<<endl;
		cout<<"Please collect  receipt from receipt dispenser"<<endl;
		cout<<"Your Remaining Account Balance is Rs "<<balance<<endl;
	}

	else if(amount > balance){
		cout<<"Insufficient balance!"<<endl;
		cout<<"Try Again"<<endl;
	}
	else{
		cout<<"Un-Expected Error Occurred"<<endl;
	}
	
	
}


float interest(float balance,float interest_rate, float interest_amount, float new_amount){
	interest_amount = balance*(interest_rate/100);
	cout<<"Your bank offers yearly interest ratio of "<<interest_rate<<"%"<<endl;
	cout<<"At this rate by the end of year, on your current balance interest amount would be Rs "<<interest_amount<<endl;
	new_amount = balance + interest_amount;
	cout<<"By the end of the year your new balance would be Rs "<<new_amount<<endl;
}


int main(){
	int pin;
	int acc_no;
	string phone_no = "+92*******695";
	int two_fac;
	float balance = 50000.000;
	float withdraw_amount;
	float deposit_amount;
	float interest_rate = 9.5, interest_amount, new_amount;
	bool access = false;
	int selection;
	
	security(pin,acc_no,phone_no,two_fac,access);
	
	cout<<"Select Please"<<endl;
	cout<<"Enter the option number please:"<<endl;
	cout<<"1 for Balance Information"<<endl;
	cout<<"2 for Amount Deposit"<<endl;
	cout<<"3 for Amount Withdrawal"<<endl;
	cout<<"4 for Yearly Interest Calculation"<<endl;
	cin>>selection;
	if(selection == 1){
		balance_info(balance);
	}
	else if(selection == 2){
		deposit(balance,deposit_amount);
	}
	else if(selection == 3){
		withdrawal(balance,withdraw_amount);
	}
	else if(selection == 4){
		interest(balance,interest_rate,interest_amount,new_amount);
	}
	else{
		cout<<"Un-Expected Error Occured Due To Wrong Input"<<endl;
		cout<<"Try Again Later"<<endl;
	}
}
