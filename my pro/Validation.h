#pragma once
#include<iostream>
#include<string>
using namespace std;
template<class a>

class Validation
{


	static a validemail() {

		return email;
	}
	static bool a validaccountnumber() {
		if (!isdigit) {
			return false
		}
		else 
		return true;
	}
	static a validpassword() {
		return password;
	}

	static a validid() {
		return id;
	}
	static a validcreditcardnumber() {
		return creditcardnumber;
	}
	static bool a checkbalance() {
		return balance >= 0;
	}

};

