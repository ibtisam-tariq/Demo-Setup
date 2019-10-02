#include "gtest/gtest.h"
#include "Student.h"

double student_declare()
{
    Student s1("Joe",40,50);
    return s1.cal_percentage(false);
}

TEST (student, mid_term_percentage) { 
    EXPECT_EQ (80.0, student_declare());
}
