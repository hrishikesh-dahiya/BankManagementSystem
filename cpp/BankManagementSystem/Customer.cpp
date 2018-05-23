/*
 * Customer.cpp
 *
 *  Created on: 23-May-2018
 *      Author: detonator
 */

#include "Customer.h"

Customer::Customer(string f_name, string l_name, int phone_no, int income) {

	this->f_name = f_name;
	this->l_name = l_name;
	this->phone_no = phone_no;
	this->income = income;
	// add init for customer_id

}

void Customer::set_address(string address) {
	this->address = address;
}

void Customer::update_address(string address) {
	this->address = address;
}

void Customer::set_income(int income) {
	this->income = income;
}

void Customer::update_income(int income) {
	this->income = income;
}

void Customer::set_job(string job) {
	this->job = job;
}

void Customer::update_job(string job) {
	this->job = job;
}

void Customer::update_phone_no(int phone_no) {
	this->phone_no = phone_no;
}

string Customer::get_customer_id() {
	return this->customer_id;
}

string Customer::get_name() {
	return this->f_name + this->l_name;
}

int Customer::get_income() {
	return this->income;
}

int Customer::get_phone_no() {
	return this->phone_no;
}

string Customer::get_address() {
	return this->address;
}

string Customer::get_job() {
	return this->job;
}

Customer::~Customer() {
	// TODO Auto-generated destructor stub
}

