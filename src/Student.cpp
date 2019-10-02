#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name,int mid_marks,int final_marks)
{
	this->name=name;
	this->mid_marks=mid_marks;
	this->final_marks=final_marks;
}

double Student::cal_percentage(bool is_final)
{
	double percentage=0;
	if(is_final)
	{
		percentage=final_marks;
	}	
	else
	{
		percentage=mid_marks*100/50;
	}
	return percentage;
	
}
std::string Student::getName()
{
	return name;
}

void Student::display(){
	cout << "A student with name " << this->name << endl;
	cout << "A student with mid term marks " << this->mid_marks << endl;
	cout << "A student with final term marks " << this->final_marks << endl;
}

