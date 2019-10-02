#include "Student.h"
#include <iostream>

using namespace std;
int main()
{
    Student s1("Joe",40,50);
    cout<<s1.cal_percentage(false)<<endl;
    s1.display();
    return 0;


}