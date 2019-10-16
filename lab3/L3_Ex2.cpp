/*

CSE201-F19 Tuesday or Thursday Lab (depending on your lab day)

@file L3_Ex2.cpp

@author Akinyemi Adetunji

@date October 15, 2019

DESCRIPTION: Write a program that prompts the user for the number of Kilowatt Hours used and then calculates and prints the total electric bill. 



ALGORITHM: Get user input and multiply by appropriate rate using if else statement

*/ 

#include <iostream> 

using namespace std; 


int main(){
	float h, bill; 
	
	cout << "KWH: "; 
	cin >> h; 
	
	if(h <= 999){
		bill = h*0.35;
	}else if(h>=1000 && h <= 1499){
		bill = h*0.40; 
	} else if (h>=1500 && h<=1999){
		bill = h*0.45; 
	} else {
		bill = h*0.60;
	}	

	cout << "$" << bill << endl; 

	return 0; 
}
