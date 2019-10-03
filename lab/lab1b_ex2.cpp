// <<006185656>> LAB 1B - Exercise 2
#include <iostream> 
#include <string> 

using namespace std; 

int main(){
	string name; 
	cout << "Hello, my name is Hal!\n" << "What is your name? "; 
	getline(cin, name); 
	cout << "Hello, " << name << ". I am glad to meet you!\n"; 


	return 0; 
}
