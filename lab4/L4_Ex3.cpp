/*

CSE201-F19 Tuesday Lab

file L4_Ex3.cpp

author Akinyemi Adetunji

date 10 22, 2019

DESCRIPTION: Using switch statement to design a menu selection and accept an user input.  

ALGORITHM: If the user input is 'A', then print out the exercise. If the user input is 'P' then print out the exercise. The program should run continuously until user input 'X' to exit the program.
*/

// int argc, char const *argv[]

#include <iostream>
#include <cstdlib>

using namespace std; 

void printLine(){
	int c=0; 
	for(int i=0; i<10; i++){
		if(c==0){
			cout << "*---*";
			c++;
		} else {
			cout << "-----*"; 
		}
		 
	}

	cout << endl << endl; 
}

void timesTable(){
	int n; 
	int x[] = {1,2,3,4,5,6,7,8,9};

	printLine(); 
	for(int i=0; i<9; i++){
		cout << "| ";
		if(i==0){
			cout << "x";
			while(i<9){
				if(i==0){
					cout << " |  " << x[i];
				} else {
					cout << "  |  " << x[i];
				}
				i++;  
			}
			i=0; 
			cout << "  |" << endl << endl; 
			printLine();

			cout << "| "; 

			cout << x[i];
			for(int j = 0; j<9; j++){
				if(j==0){
					cout << " |  " << x[i]*x[j];
				} else {
					cout << "  |  " << x[i]*x[j];
				}
				 
			}  
			cout << "  |";
		} else {
			cout << x[i];
			for(int j = 0; j<9; j++){
				if(j==0){
					cout << " |  " << x[i]*x[j];
					if(x[i]*x[j+1] >= 10) {
						cout << " ";
					}
				} else {
					if(x[i]*x[j] >= 10){
						cout << " |  " << x[i]*x[j];	
					} else {
						cout << "  |  " << x[i]*x[j];
					}
					if(x[i]*x[j+1] >= 10 && x[i]*x[j] < 10) {
						cout << " ";
					}
					
				}
			}
			cout << " |"; 
		}
		cout << endl << endl;
		printLine();
	}
}

void asterisk(){
	int n = 6; 

	for(int i=0; i < 5; i++){
		for(int j=0; j < n; j++){
			cout << "*"; 
		}
		cout << endl << endl; 
		n--;  
	}
	for(int i=0; i < 6; i++){
		for(int j=0; j < n; j++){
			cout << "*"; 
		}
		cout << endl << endl; 
		n++; 
	}


}

int main()
{
	char user_input; 
	
	cout << "Enter 'A' to print 9x9 grid or enter 'P' to display pattern or 'X' to exit program: ";

	cin >> user_input; 
	while(user_input != 'X'){
		switch(user_input){
			case 'A': 
				system("clear");
				timesTable(); 
				break;
			case 'P': 
				system("clear");
				asterisk(); 
				break; 
			case 'X': 
				break; 
			default: 
				//system("clear");  
				cout << "invalid input. \n"; 

		}
		cout << "Enter 'A' to print 9x9 grid or enter 'P' to display pattern or 'X' to exit program: "; 
		cin >> user_input; 
	}


	return 0;
}
