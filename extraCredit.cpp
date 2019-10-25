#include <iostream> 


using namespace std; 

int main(){
	
	int x = 0; 
	int y = 0; 
	
	while(x<=4){
		while(y<=(x)){
			
			cout << (y+1)%2;  
			y++; 
		}
		y=0;
		cout <<	endl; 
		x++; 
	}



	return 0; 
}


