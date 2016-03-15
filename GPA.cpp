#include <iostream> //library for input/output 
#include <iomanip>	//library for setw
#include <string>	//library for strings
#include <fstream>	//for the file opening
using namespace std;

void heading()	// declaring heading
{
	cout << "******************************************************\n";
	cout << "Harold Lomotey\n"
		"@02732375\n"
		"SYCS-135 Computer Science I"
		"September 21, 2015\n"
		"Lab 4, Problem 1\n"
		"*****************************************************\n";
}


int main()
	
{
	string firstname, lastname, classification;
	int QP, credits;
	float GPA;
	ifstream myfile; //declares the variable for the file
	heading();	//calls the header function
	cout << "\n";
	cout << setw(30) << "GPA REPORT\n";
	cout << "\n";
	cout << setw(5) << "Name" << setw(12) << "Class" << setw(10) << "QP" << setw(15) << "Credits" << setw(17) << "GPA" <<"\n";
	myfile.open("infile.txt"); //opens the text file 
	myfile >> firstname >> lastname >> classification >> QP >> credits; // puts the data from the text into main
	GPA = float(QP) / float(credits);
	cout << firstname << " " << lastname << setw(7) << classification << setw(11) << QP << setw(13) << credits << setw(20) << showpoint << setprecision(3) << GPA << "\n"; // displays the first line in the text
	myfile >> firstname >> lastname >> classification >> QP >> credits;
	GPA = float(QP) / float(credits);
	cout << firstname << " " << lastname << setw(6) << classification << setw(11) << QP << setw(13) << credits << setw(20) << showpoint << setprecision(3) << GPA << "\n"; //displays the second line in the text
	myfile >> firstname >> lastname >> classification >> QP >> credits;
	GPA = float(QP) / float(credits);
	cout << firstname << " " << lastname << setw(4) << classification << setw(11) << QP << setw(13) << credits << setw(20) << showpoint << setprecision(3) << GPA << "\n"; //diplays the third line in the text 
	
	system("pause");
	return 0;
	
}


//******************************************************
//Harold Lomotey
//@02732375
//SYCS - 135 Computer Science ISeptember 21, 2015
//Lab 4, Problem 1
//* ****************************************************
//
//GPA REPORT
//
//Name        Class        QP        Credits              GPA
//Joe Smith      S         40           12                3.33
//Fred Davis     F         35           14                2.50
//June Freeman   J         40           10                4.00
