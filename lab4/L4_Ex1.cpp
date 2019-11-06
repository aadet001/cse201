/*

CSE201-F19 Tuesday Lab 

file L4_Ex1.cpp

author Akinyemi Adetunji

date 10 22, 2019

DESCRIPTION: print out a 9 by 9 multiplication table as followed in a grid.


ALGORITHM: <provide an algorithm that you use to solve this problem>

*/

#include <iostream> 

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


int main(){

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


	return 0;
}
