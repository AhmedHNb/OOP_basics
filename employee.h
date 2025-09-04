#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "person.h"

using namespace std;

/**
 * @class employee
 * @brief Represents an employee, inheriting from person.
 */
class employee : public person
{
private:
    int _salary;
    string _title;
    string _department;

public:
    /**
     * @brief Constructs a new employee object.
     * @param id The employee's ID.
     * @param first_name The employee's first name.
     * @param last_name The employee's last name.
     * @param email The employee's email address.
     * @param phone_num The employee's phone number.
     * @param salary The employee's salary.
     * @param title The employee's title.
     * @param department The employee's department.
     */
    employee(int id, string first_name, string last_name, string email, string phone_num, int salary, string title, string department)
        : person(id, first_name, last_name, email, phone_num)
    {
        _salary = salary;
        _title = title;
        _department = department;
    }

    /**
     * @brief Sets the salary of the employee.
     * @param salary The new salary.
     */
    void set_salary(int salary)
    {
        _salary = salary;
    }

    /**
     * @brief Sets the title of the employee.
     * @param title The new title.
     */
    void set_title(string title)
    {
        _title = title;
    }

    /**
     * @brief Sets the department of the employee.
     * @param department The new department.
     */
    void set_department(string department)
    {
        _department = department;
    }

    /**
     * @brief Gets the salary of the employee.
     * @return The salary.
     */
    int get_salary()
    {
        return _salary;
    }

    /**
     * @brief Gets the title of the employee.
     * @return The title.
     */
    string get_title()
    {
        return _title;
    }

    string get_department()
    {
        return _department;
    }

    /**
     * @brief Prints the employee's information.
     */
    void print_info()
    {
        person::print_info(); // Call base class print_info
        cout << "Title: " << _title << endl;
        cout << "Department: " << _department << endl;
        cout << "Salary: " << _salary << endl;
    }
};

#endif // EMPLOYEE_H
