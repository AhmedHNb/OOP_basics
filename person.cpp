#include <iostream>
using namespace std;

/**
 * @class person
 * @brief Represents a person with basic personal information.
 */
class person 
{
private:
    int _id;
    string _first_name;
    string _last_name;
    string _email;
    string _phone_num;

public:
    /**
     * @brief Constructs a new person object.
     * @param id The person's ID.
     * @param first_name The person's first name.
     * @param last_name The person's last name.
     * @param email The person's email address.
     * @param phone_num The person's phone number.
     */
    person(int id, string first_name, string last_name, string email, string phone_num)
    {
        _id = id;
        _first_name = first_name;
        _last_name = last_name;
        _email = email;
        _phone_num = phone_num;
    }

    /**
     * @brief Sets the first name of the person.
     * @param f_name The new first name.
     */
    void set_first_name(string f_name)
    {
        _first_name = f_name;
    }

    /**
     * @brief Sets the last name of the person.
     * @param l_name The new last name.
     */
    void set_last_name(string l_name)
    {
        _last_name = l_name;
    }

    /**
     * @brief Sets the email address of the person.
     * @param email The new email address.
     */
    void set_email(string email)
    {
        _email = email;
    }

    /**
     * @brief Sets the phone number of the person.
     * @param phone The new phone number.
     */
    void set_phone(string phone)
    {
        _phone_num = phone;
    }

    /**
     * @brief Gets the full name of the person.
     * @return The full name.
     */
    string get_full_name()
    {
        return _first_name + " " + _last_name;
    }

    /**
     * @brief Gets the first name of the person.
     * @return The first name.
     */
    string get_first_name()
    {
        return _first_name;
    }

    /**
     * @brief Gets the last name of the person.
     * @return The last name.
     */
    string get_last_name()
    {
        return _last_name;
    }

    /**
     * @brief Gets the ID of the person.
     * @return The ID.
     */
    int get_id()
    {
        return _id;
    }

    /**
     * @brief Gets the email address of the person.
     * @return The email address.
     */
    string get_email()
    {
        return _email;
    }

    /**
     * @brief Gets the phone number of the person.
     * @return The phone number.
     */
    string get_phone()
    {
        return _phone_num;
    }

    /**
     * @brief Sends an email.
     * @param subject The subject of the email.
     * @param body The body of the email.
     */
    void send_emial(string subject, string body)
    {
        cout << "send email to " << _email << "about : " << subject << '\n' << body << endl;
    }

    /**
     * @brief Sends an SMS.
     * @param message The message to send.
     */
    void send_sms(string message)
    {
        cout << "send message to " << _phone_num << " " << "\n" << message << endl;
    }

    /**
     * @brief Prints the person's information.
     */
    void print_info()
    {
        cout << "id :" << _id << endl;
        cout << "first_name :" << _first_name << endl;
        cout << "last_name :" << _last_name << endl;
        cout << "full_name :" << get_full_name() << endl;
        cout << "email :" << _email << endl;
        cout << "phone_num :" << _phone_num << endl;
    }
};

/**
 * @class employee
 * @brief Represents an employee, inheriting from person.
 */
class employee : public person
{
private:
    int _salary;
    string _tilte;
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
    employee(int id, string first_name, string last_name, string email, string phone_num, int salary, string title, string department) : person(id, first_name, last_name, email, phone_num)
    {
        _salary = salary;
        _tilte = title;
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
     * @brief Gets the salary of the employee.
     * @return The salary.
     */
    int get_salary()
    {
        return _salary;
    }

    /**
     * @brief Sets the title of the employee.
     * @param title The new title.
     */
    void set_title(string title)
    {
        _tilte = title;
    }

    /**
     * @brief Gets the title of the employee.
     * @return The title.
     */
    string get_title()
    {
        return _tilte;
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
     * @brief Gets the department of the employee.
     * @return The department.
     */
    string get_department()
    {
        return _department;
    }

    /**
     * @brief Prints the employee's information.
     */
    void print_info()
    {
        person::print_info();
        cout << "Salary: " << _salary << endl;
        cout << "Title: " << _tilte << endl;
        cout << "Department: " << _department << endl;
    }
};

/**
 * @class developer
 * @brief Represents a developer, inheriting from employee.
 */
class developer : public employee
{
private:
    string _main_programming_language;

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
     * @param main_programming_language The developer's main programming language.
     */
    developer(int id, string first_name, string last_name, string email, string phone_num, int salary, string title, string department, string main_programming_language)
        : employee(id, first_name, last_name, email, phone_num, salary, title, department)
    {
        _main_programming_language = main_programming_language;
    }

    /**
     * @brief Sets the main programming language of the developer.
     * @param main_programming_language The new main programming language.
     */
    void set_main_programming_language(string main_programming_language)
    {
        _main_programming_language = main_programming_language;
    }

    /**
     * @brief Gets the main programming language of the developer.
     * @return The main programming language.
     */
    string get_main_programming_language()
    {
        return _main_programming_language;
    }

    /**
     * @brief Prints the developer's information.
     */
    void print_info()
    {
        employee::print_info();
        cout << "Main Programming Language: " << _main_programming_language << endl;
    }
};

int main()
{
    developer d1(10, "ahmed", "alnabelsi", "ahmed@demo.com", "096955555", 1500, "back-end", "software eng", "C++");
    d1.send_emial("job", "welcome to our team");
    d1.send_sms("hi");
    d1.print_info();
}
