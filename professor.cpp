// professor class definition 
#include "professor.h"

//default Professor Constructor
Professor::Professor() : User()                                                             //call to parent class constructor in order to change fields from child class
{
	total_weight = 0;
}



// non-trivial methods
void Professor::enter_studentname(Student& student) {
	std::cout << "Please enter the student's name:" << std::endl;
	std::string name;
	std::cin >> name;
	student.set_name(name);
}

void Professor::user_type() {
	std::cout << "This user is a professor!" << std::endl;
	std::cout << std::endl;
}


// use of iterators on aggregates, using the advance increment to increment the iterator.
void Professor::view_grades(Student student) {                                               // Unique view_grades method to Professor class
	std::cout << "You are viewing " << student.get_name() << " grades as a Professor." << std::endl;
	for (int i = 0; i < student.student_grades.size(); i++) {
		std::cout << student.student_grades.at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}



// use of iterators on aggregates, using the advance increment to increment the iterator.
void Professor::set_grades(Student& student) {                                              // passing student object by reference to modify values in student_grades vector in Student class
	double temp = 0;
	std::cout << "You are entering grades for " << student.get_name() << "." << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cin >> temp;
		student.student_grades[i] = temp;
	}
	std::cout << "Grades have been successfully submitted" << std::endl;
	std::cout << std::endl;
}

/**
 * @brief 
 * @param student 
*/
void Professor::calculate_final_grade(Student& student) {
	double weighed_course_average = 0;
	weighed_course_average = (student.student_grades.at(0) * quiz_weight) + (student.student_grades.at(1) * exam_weight)
		+ (student.student_grades.at(2) * homework_weight) + (student.student_grades.at(3) * project_weight);
	std::cout << "Final Grade: " << weighed_course_average << std::endl;
	std::cout << std::endl;
}



