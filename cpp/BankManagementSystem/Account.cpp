/*
 * Account.cpp
 *
 *  Created on: 23-May-2018
 *      Author: detonator
 */

#include "Account.h"

Account::Account(string customer_id, string account_type) {

	this->customer_id = customer_id;
	this->account_type = account_type;
	this->customer_grade = "B";
	this->account_bal = 0;
	// add init for account_no

}

void Account::set_customer_grade(char customer_grade) {
	this->customer_grade = customer_grade;
}

void Account::add_loan_id(string loan_id) {
	this->loan_id = loan_id;
}

string Account::get_account_no() {
	return this->account_no;
}

int Account::get_account_bal() {
	return this->account_bal;
}

string Account::get_customer_id() {
	return this->customer_id;
}

string Account::get_account_type() {
	return this->account_type;
}

char Account::get_customer_grade() {
	return this->customer_grade;
}

string Account::get_loan_id() {
	if(this->loan_id != NULL){
		return this->loan_id;
	} else {
		return "Sorry, this account is not associated with any loans.";
	}
}

Account::~Account() {
	// TODO Auto-generated destructor stub
}

