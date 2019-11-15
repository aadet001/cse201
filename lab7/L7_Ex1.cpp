/*

CSE201-F19 Tuesday Lab (depending on your lab day)

@file L6_Ex1.cpp

@author Akinyemi Adetunji 
@date November 12, 2019

DESCRIPTION: print bar chart using information provided


ALGORITHM: use nested for loop to go through both arrays. make an asterisk for
every other volume value. 

 

*/

#include <iostream>
#include <string>

using namespace std; 

int main(){
	string month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int vol[] = {4,6,2,8,10,2,2,10,12,16,8,4};

	cout << "  ** Sales Statistics **" << endl; 
	cout << "Month  Volume" << endl; 

	for(int i =0; i < 12; i++){
		cout << " " <<  month[i] <<  "   ";
		for(int j =0; j < (vol[i]/2); j++){
			cout << "*";
		} 
		cout << endl; 
	}
	
	return 0; 
}