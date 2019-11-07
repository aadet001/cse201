/*

CSE201-F19 Tuesday Lab (depending on your lab day)

@file L6_Ex1.cpp

@author Akinyemi Adetunji 
@date November day, 2019

DESCRIPTION: <provide here a brief and concise description of what this program does>

ALGORITHM:

<provide an algorithm that you use to solve this problem>

 

*/

#include <iostream>
#include <cstdlib> 
#include <vector> 

using namespace std; 

class Customer {
public:
	Customer(string n, string a, string c, string s, string z); 
	void increase_limit(double amount); 
	string get_name() const; 
	string get_address() const; 
	string get_city() const; 
	string get_state() const;
	double credit_limit = rand()%1000+10000; 

	
	
private: 
	string name; 
	string address; 
	string city; 
	string state; 
	string zipcode; 	
			
}; 

//: name(n), address(a), city(c), state(s), zipcode(z) {}
//this does not work if inputed variables are the same name as local variables. sets nothing equal to nothing 
//Customer(string n, string address, string city, string state, string zipcode)
Customer::Customer(string n, string a, string c, string s, string z){
	name = n ; 	
	address = a; 
	city = c; 
	state = s; 
	zipcode = z;
}
void Customer::increase_limit(double amount){
	credit_limit += amount; 
}
string Customer::get_name() const {
	return name; 	
} 
string Customer::get_address() const{
	return address;
}
string Customer::get_city() const{
	return 	city; 
}
string Customer::get_state() const{
	return state; 
} 

Customer makeNewCustomer(){
	//name, address, city, sate, zipcode
	string n, a, c, s, z; 
	cout << "Name: ";
	// cin >> n; 
	getline(cin, n);
	cout << "Address: ";
	// cin >> a;  
	getline(cin, a);
	cout << "City: ";
	// cin >> c; 
	getline(cin, c);
	cout << "State: ";
	// cin >> s; 
	getline(cin, s);
	cout << "Zipcode: "; 
	// cin >> z; 
	getline(cin, z);

	Customer customer(n,a,c,s,z); 


	return customer; 
}

int main(){
	vector<Customer> v;

	Customer c("John Doe", "123 Evergreen Terrace", "Springfield", "Massachussettes", "10129");  

	cout << c.get_name() << endl
		<< c.get_address() << endl
		<< c.get_city() << endl 
		<< c.get_state() << endl;
	
	v.push_back(c); 

	v.push_back(makeNewCustomer()); 
	cout << v[1].get_name() << endl
		<< v[1].get_address() << endl
		<< v[1].get_city() << endl 
		<< v[1].get_state() << endl;
	//do while loop acccepting customer information until user enters terminating character. 
	





	return 0; 
}
