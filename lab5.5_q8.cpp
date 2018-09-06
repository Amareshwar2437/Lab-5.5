//include all necessary libraries
#include<iostream>
using namespace std;
int main(){

	//programme to print the right angled star patern 
	//ask the user for declaring the varibles and initialise their values
	
	int x=0;
	for (x=0; x <=5; x++)

	//defining the parameters such as row or column through parameters x and y
	
	{
		cout<< "*";
	//its gonna be a right angled triangle
	for (int y=0; y<x ; y++)
	{
		cout<<"*";
	}

	cout <<endl;
	}

	return 0;
} 
