//include all the necessary libraries
#include<iostream>
using namespace std;

int main(){

	//programme to print a star pyramid
	//ask user for the variables which are rows, and numbers

	int rows, i , j, spaces;

	cout <<"Enter the number of rows:";
	cin >>rows;

	for (i=1; i<=rows;i++)

	{
		//create loop for displaying space
		for(spaces=i;spaces<rows;spaces++)

	{
		cout<<" ";
	}
		//create loop to display the star equal to the row number

		for(j=1; j<=(2*i-1);j++)

	{
		cout<< "*";
	}

		cout <<endl;
	}
		
	return 0;
}
