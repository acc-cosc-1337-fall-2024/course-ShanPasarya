//write include statements
#include "/workspaces/course-ShanPasarya/src/homework/03_decisions/decisions.cpp"
#include <iostream>

using namespace std;
using std::string;

int main() 
{
	int option= 0;
	
	cout << "MAIN MENU" << endl;

	while (option != -1)
	{
		cout << "1-Grade using IF" << endl;
		cout << "2-Grade using SWITCH" << endl;
		cout << "Exit " << endl;
		cin >> option;
	

	if (option == 1)
	{
		int grade;
        cout << "Enter the numerical grade: ";
        cin >> grade;

        string result = get_letter_grade_using_if(grade);
        cout << "Letter Grade is: " << result << endl;

        break;
	}
	else if (option == 2)
    {
        int grade;
        cout << "Enter the numerical grade: ";
        cin >> grade;

        string result = get_letter_grade_using_switch(grade);
        cout << "Letter Grade is: " << result << endl;

        break;
    }
    else if (option == '\0')
    {
        break;
    }
    }

	return 0;
}