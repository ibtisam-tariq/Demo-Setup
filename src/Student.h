#include<string>

class Student{
private:
	std::string name;
	int final_marks;
	int mid_marks;
public:
	Student(std::string,int,int );
	double cal_percentage(bool);
	std::string getName();
	void display();
};
