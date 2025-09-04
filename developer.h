#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <iostream>
#include "employee.h"

using namespace std;

/**
 * @class developer
 * @brief Represents a developer, inheriting from employee.
 */
class developer : public employee
{
private:
    string _programming_language;

public:
    /**
     * @brief Constructs a new developer object.
     * @param id The developer's ID.
     * @param first_name The developer's first name.
     * @param last_name The developer's last name.
     * @param email The developer's email address.
     * @param phone_num The developer's phone number.
     * @param salary The developer's salary.
     * @param title The developer's title.
     * @param department The developer's department.
     * @param programming_language The developer's primary programming language.
     */
    developer(int id, string first_name, string last_name, string email, string phone_num, int salary, string title, string department, string programming_language)
        : employee(id, first_name, last_name, email, phone_num, salary, title, department)
    {
        _programming_language = programming_language;
    }

    /**
     * @brief Sets the programming language of the developer.
     * @param programming_language The new programming language.
     */
    void set_programming_language(string programming_language)
    {
        _programming_language = programming_language;
    }

    /**
     * @brief Gets the programming language of the developer.
     * @return The programming language.
     */
    string get_programming_language()
    {
        return _programming_language;
    }

    /**
     * @brief Prints the developer's information.
     */
    void print_info()
    {
        employee::print_info(); // Call base class print_info
        
        cout << "Programming Language: " << _programming_language << endl;
    }
};

#endif // DEVELOPER_H
