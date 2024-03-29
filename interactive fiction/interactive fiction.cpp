// interactive fiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cctype>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

//string Hi(string name);

int main()
{
	/*
	string name = "";

	cout << "whats your name?" << endl;
	cin >> name;
	
	Hi(name);
	Hi("sally");
	name = "barney";
	string getReturn;
	getReturn = Hi(name);
	cout << "The function said back to us " << getReturn << endl;


	system("pause");
	*/
	
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new story.\n";

	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);
	
    return 0;
}
/*
string Hi(string name)
{
	cout << "Hello " << name << endl;
	return "Hi Yourself!";

}
*/
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

