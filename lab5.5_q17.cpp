#include<iostream>
using namespace std;

int main(){

	//programme to print a hollow star pyramid
	//ask user for the variables which are rows, and numbers

	int rows,i,j,spaces;

	cout<<"Enter required number of rows:";
	cin >>rows;

	for(i=1;i <=rows; i++)
	{
		//for the loop to put the gaps within the pyramid
		
	for (spaces=i;spaces<rows;spaces++)
		cout <<" ";

		//for the loop to print star
	for (j=1; j<= (2*rows-1);j++)
	{
		if(i == rows|| j ==1|| j==2*i-1)
			cout <<"*";
		
		else 
			cout <<" ";
	}
	 	cout <<endl;
	}

	return 0;
}

