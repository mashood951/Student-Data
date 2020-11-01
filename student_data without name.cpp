#include <iostream>
#include <string>
#include <vector>
using namespace std;

int input();
int display();
int num_std;
int stud = 0;
float per;

int main()
{
	int a;

	cout << "How many number of students do you have: ";
	cin >> num_std;
	
	for (a = 1; a <= num_std; a++)
	
	{
		for (stud = 1; stud <= num_std; stud++)
		{
			input();
			display();
		}
		break;
	}
		

	cout << endl << endl;

	return 0;
}


int input()

{
	float o_marks, t_marks;

	cout << endl << "Details of student number " << stud <<": " << endl;
	cout << "Enter obtained marks: ";
	cin >> o_marks;
	cout << "Enter total marks: ";
	cin >> t_marks;

	per = (o_marks / t_marks) * 100;

	return 0;
}

int display()
{
	cout << "Percentage of student number " << stud <<" is: " << per << endl;
	
	return 0;
}
