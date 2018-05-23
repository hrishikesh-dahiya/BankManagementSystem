/*
 * Customer.h
 *
 *  Created on: 23-May-2018
 *      Author: detonator
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>

using namespace std;

class Customer {
public:

	Customer(string f_name, string l_name, int phone_no); // TODO
	Customer(string f_name, string l_name, int phone_no, int income);
	virtual ~Customer();

	void set_income(int income);
	void update_income(int income);

	void update_phone_no(int phone_no);

	void set_address(string address);
	void update_address(string address);

	void set_job(string job);
	void update_job(string job);

	string get_customer_id();

	string get_name();

	int get_phone_no();

	string get_address();

	string get_job();

	int get_income();


private:

	string customer_id;

	string f_name;
	string l_name;

	// add email id

	int phone_no;

	string address;

	int income;

	string job;

};

#endif /* CUSTOMER_H_ */
