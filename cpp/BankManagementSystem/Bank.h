/*
 * Bank.h
 *
 *  Created on: 23-May-2018
 *      Author: detonator
 */

#ifndef BANK_H_
#define BANK_H_

#include <string>
#include <vector>

using namespace std;

class Bank {
public:

	Bank();
	virtual ~Bank();

private:

	string bank_name;

	vector<string> accounts[];

	vector<string> customers[];

	string manager_name;

	vector<string> employees[];

	string address;

	string phone_no;

	string email_id;

};

#endif /* BANK_H_ */
