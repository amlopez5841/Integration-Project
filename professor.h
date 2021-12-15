// professor class implementation 
#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "user.h"
#include "student.h"
#include "course.h"

class Professor : public User
{
private:
	const double quiz_weight = 0.20;
	const double exam_weight = 0.30;
	const double homework_weight = 0.25;
	const double project_weight = 0.25;
	double total_weight;


public:

	//default constructor
	Professor();


	// member methods
	void user_type();
	void enter_studentname(Student& student);

	void view_grades(Student student);
	void set_grades(Student& student);

	void calculate_final_grade(Student& student);
};

#endif // PROFESSOR_H
