//include all necessary libraries
#include<iostream>
using namespace std;
int main(){

	//programme to print a square star pattern grid
	//ask the user to deliver the variables and declare their intial values
	
	int x,y,n;
	cout <<"Enter the required number of stars:"<<endl;
	cin >>n;
	//do take the value from terminal by asking the user

	for (int x=0; x<n; x++)
	{
		for (int y=0; y<n; y++)
	{
		cout<<"*";
	}

		cout<<endl;
	}

	return 0;
}
		
