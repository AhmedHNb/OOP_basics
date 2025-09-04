#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std ;

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
    void send_email(string subject, string body)
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

#endif // PERSON_H