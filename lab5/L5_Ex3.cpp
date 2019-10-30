
/*

CSE201-F19 Tuesday Lab (depending on your lab day)

file L4_Ex3.cpp

author Akinyemi Adetunji

date October 29, 2019

DESCRIPTION: Write a program that asks a name say hello. Use your own function, 
that recives a string of characters (name) and prints on screen the hello message. 
(Doesn't returns anything- void type) 

ALGORITHM: <provide an algorithm that you use to solve this problem>

*/

#include <iostream> 
#include <string> 

using namespace std; 

void sayHello(string);

int main(){
	string name; 

	cout << "Enter name: "; 
	cin >> name; 
	sayHello(name); 




	return 0; 
} 

void sayHello(string s){

	cout << "Hello, " << s << "." << endl; 
}
