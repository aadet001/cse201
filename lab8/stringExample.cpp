#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv){
	char newstr[40] ;
	string greeting = "Hello World!! This is a great day." ;
	string str1 = "Morning has broken!!" ;
	string str2 = "The night is young!!" ;
	string str3 = "Ice" ;
	string str4 = "Iceream" ;
	int cv ;

	cout << "Length of the string is " << greeting.length() << ".\n" ;
	cout << "Sub string: " << greeting.substr(3, 6) << ".\n" ;
	greeting.copy(newstr, greeting.length(), 0) ;
	newstr[greeting.length()] = '\0' ;
	cout << "Result of string copy: "<< newstr << "." << endl ;
	
	str1.swap(str2) ;
	cout << "After swap, the new string 1 is: "<< str1 <<"." << endl ;

	cv = str3.compare(str4) ;

	cout << "value of cv = " << cv << endl; 

	if (cv > 0)
		cout << "String 1 is greater.\n" ;
	if (cv == 0)
		cout << "Both strings are same.\n" ;
	if (cv < 0)
		cout << "String 2 is greater.\n"  ;


	return 0 ;
}
