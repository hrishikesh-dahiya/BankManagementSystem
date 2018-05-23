/*
 * Account.h
 *
 *  Created on: 23-May-2018
 *      Author: detonator
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

using namespace std;

class Account {
public:

	Account(string customer_id, string account_type);
	virtual ~Account();

	void set_customer_grade(char customer_grade);

	void add_loan_id(string loan_id);

	string get_account_type();

	char get_customer_grade();

	int get_account_bal();

	string get_loan_id();

	string get_customer_id();

	string get_account_no();


private:

	string account_no;

	string customer_id;

	int account_bal;

	string account_type; 	// change to enum

	string loan_id = NULL;

	char customer_grade;	// change to enum

};

#endif /* ACCOUNT_H_ */
