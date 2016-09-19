#include <iostream>
#include <fstream>  //step 1
using namespace std;

/*
Read celcius temps from ctemps.txt
Convert the temps to fahrenheit
Output the fahrenheit temps to ftemps.text
*/



int main()
{
	//step 2
	ifstream inputFile;
	ofstream outputFile; //file object to be used for output
	double dCTemp;
	double dFTemp;

	//step 3
	inputFile.open("ctemps.txt");
	outputFile.open("ftemps.txt");

	//step 4
	while (!inputFile.eof())
	{
		//reading the celcius.txt file
		inputFile >> dCTemp;

		//convert to fahrenheit
		dFTemp = dCTemp * (9.0 / 5.0) + 32;
		
		//display the celcius.txt file
		outputFile << dFTemp << endl;
		//cout << dFTemp << endl;
	}


	//step 5
	inputFile.close();
	outputFile.close();

	return 0;
}