/**
* @file user.h
* @brief Declaration of a User class object.
* 
* @author Alexis Lopez
* @bug no known bugs.
*/
#ifndef USER_H 
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "course.h"

/**
 * @brief A User class that can is the base class for the Student and Professor classes
 * 
 * This User class is used to define fields and methods that used by all types of users. 
*/
class User : public Course {			
	//private fields
private:
	std::string m_idnum;
	std::string m_name;

public:
	// default constructor
	User()noexcept;

	// properties constructor
	User(std::string idnum);

	// getters and setters
	//std::string GetIdnum();
	auto GetIdnum()->std::string;
	void SetIdnum(std::string idnum);


	//std::string GetName();
	auto GetName()->std::string;
	void SetName(std::string name);

	// member methods
	// virtual function header makes it so the view_grades function in the User class is overriden and instead executes the subclass versions of view_grades()
	// Enables us to achieve dynamic dispatch which allows us to select which implementation of a polymorphic function that we want at runtime 
	virtual void UserType();
};
#endif // USER_H