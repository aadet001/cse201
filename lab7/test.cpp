#include <iostream> 
#include <algorithm> 
#include <vector>

using namespace std; 

int main(){
	// int move[16][3] = 
	// {{1,2,3}, {1,5,9}, {1,4,7},
 //    {2,5,8}, {3,2,1}, {3,5,7}, 
 //    {3,6,9}, {4,5,6}, {6,5,4}, 
 //    {7,4,1}, {7,5,3}, {7,8,9}, 
 //    {8,5,2}, {9,8,7}, {9,5,1}, 
 //    {9,6,3}};

 //    vector<vector<int> > m(16, vector<int>(3));

 //    for (int i = 0; i < 16; i++)
 //    {
 //    	for (int j = 0; j < 3; j++)
 //    	{
 //    		m[i][j] = move[i][j]; 
 //    		cout << m[i][j];  
 //    	}
 //    	cout << endl; 
 //    }

	int movesArr[] = {1,2,3,4,5,6,7,8,9};
	int MOVE_LIST = 9; 
	vector<int> moves; 

	for(int i = 0; i < 9; i++){
		moves.push_back(movesArr[i]); 
	}	

	//cout << sizeof(moves) << endl;
	int r; 
	srand(time(0)); 
	for(int i = 0; i < 10; i++){
		r = (rand()%moves.size()); 
		cout << i+1 <<". " << moves[r] << "  " << r << endl; 
		// MOVE_LIST--;
		// if(MOVE_LIST == 0) break;
		moves.erase(moves.begin()+r); 
		if(moves.size() == 0) break; 
	}

	return 0; 
}
