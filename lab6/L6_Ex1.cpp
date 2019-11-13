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
//#include <stdlib.h>
#include <time.h>
#include <vector> 

using namespace std; 

class Customer {
public:
	Customer(string n, string a, string c, string s, string z, double cl); 
	void increase_limit(double amount); 
	string get_name() const; 
	string get_address() const; 
	string get_city() const; 
	string get_state() const;
	string newPurchase(double pp);
	double get_creditLimit(); 
	double get_balance(); 
	
	void newPurchase();
	
	
private: 
	string name; 
	string address; 
	string city; 
	string state; 
	string zipcode; 
	double balance = 0; 
	double credit_limit = 0;	
			
}; 

//: name(n), address(a), city(c), state(s), zipcode(z) {}
//this does not work if inputed variables are the same name as local variables. sets nothing equal to nothing 
//Customer(string n, string address, string city, string state, string zipcode)
Customer::Customer(string n, string a, string c, string s, string z, double cl){
	name = n ; 	
	address = a; 
	city = c; 
	state = s; 
	zipcode = z;
	credit_limit = cl; 
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
double Customer::get_creditLimit() {
	return credit_limit;
}
double Customer::get_balance(){
	return balance; 
}
//string
string Customer::newPurchase(/*int purchase price*/double pp){
	//new purchase price
	//if npp+curbalance>credit_limit
	//return purchase denied
	//else 
	// valid purchase -> curbal += npp
	double upb = pp+balance; 
	if(upb > credit_limit){
		return "Purchase denied! New purchase would exceed credit limit.\n";
	} 
	
	balance += pp; 
	return "Purchase approved!\n";
}



Customer makeNewCustomer(){
	//name, address, city, sate, zipcode
	string n, a, c, s, z;
	double cl;  
	cout << "Name: ";
	// cin >> n; 
	cin.ignore(); 
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
	cout << "Credit Limit: "; 
	// getline(cin, cl);
	cin >> cl; 

	Customer customer(n,a,c,s,z,cl); 


	return customer; 
}

void printCustomerList(vector<Customer> v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i].get_name() << endl
			<< v[i].get_address() << endl
			<< v[i].get_city() << endl 
			<< v[i].get_state() << endl
			<< v[i].get_creditLimit() << endl;

		cout << "-----------" << endl; 
	}
}

void printCusList(vector<Customer> v){
	for(int i = 0; i < v.size(); i++){
		cout << i+1 << ". " << v[i].get_name() << endl;
	}
}

void makeNewPurchase(vector<Customer> &v){
	int i; 
	double price; 

	cout << "For which customer would you like to make the purchase? \n";
	printCusList(v); 
	cout << "$: "; 
	cin >> i;
	// while(i < 0 || i > v.size()){
	// 	cout << "invalid input" << endl; 
	// 	cout << "$: "; 
	// 	cin >> i; 
	// }
	Customer n = v.at((i-1)); 

	cout << "Enter price of purchase: "; 
	cin >> price; 
	cout << n.newPurchase(price) << endl; 
	v.at((i-1)) = n; 
}

void viewBalance (vector<Customer> v){
	int i; 
	double price; 

	cout << "For which customer would you like to view their balance? \n";
	printCusList(v); 
	cout << "$: "; 
	cin >> i;
	// while(i < 0 || i > v.size()){
	// 	cout << "invalid input" << endl; 
	// 	cout << "$: "; 
	// 	cin >> i; 
	// }
	Customer n = v.at((i-1)); 
	cout << n.get_balance() << endl; 
}

int main(){
	int input; 
	vector<Customer> v;

	Customer c("John Doe", "123 Evergreen Terrace", "Springfield", "Massachussettes", "10129", 4000);  

	// cout << c.get_name() << endl
	// 	<< c.get_address() << endl
	// 	<< c.get_city() << endl 
	// 	<< c.get_state() << endl;
	
	v.push_back(c); 

	// v.push_back(makeNewCustomer()); 
	
	//do while loop acccepting customer information until user enters terminating character. 
	
	//menu
	menu:

	cout << "1. Add new customer.\n"
		<< "2. Make new purchase.\n"
		<< "3. View balance.\n"
		<< "4. Print all customers.\n"
		<< "5. Exit.\n";
	//choose cur customer 
	 
	//while loop or go-to
	cout << "$: ";
	cin >> input; 
	//getline(cin, input); 
	switch(input){
		case 1:
			c = makeNewCustomer(); 
			// v.push_back(makeNewCustomer());
			v.push_back(c); 
			goto menu;  
		case 2: 
			//new purchase
			// enter pur price
			// pass to function
			makeNewPurchase(v); 

			goto menu; 
		case 3:
			viewBalance(v); 
			goto menu;
		case 4: 
			printCustomerList(v); 
			goto menu; 	
		case 5: 
			break; 
		default:
			cout << "invalid input" << endl; 
			goto menu; 
			//break; 
	} 
	


	return 0; 
}
