//include all necessary libraries
#include <iostream>
using namespace std;
int main(){
		//programme to print an inverted hollow star pyramid
		//ask the user for the variables and declare their values

	int rows, i ,j ,spaces;
	cout <<"Enter the desired number of rows: ";
	cin>> rows;

	for(i= rows; i >= 1; i --)
	{
		//for the work to put gaps in the pyramid
		for (spaces = i; spaces <rows; spaces++)
		cout << " ";

		//for the loop to print star in the pyramid 

		for (j=1; j <= 2*i-1; j++)
	{

		if (i == rows || j == 1 || j == 2*i-1)
		
		 	cout <<"*";
		else
			cout << " ";
	}

		cout <<endl;
	}

	return 0;
}
			
