#include <iostream>
using namespace std ;

class person 
{

    private :
        int _id ;
        string _first_name ;
        string _last_name ;
        string _email ;
        string _phone_num ;


    public :

        person(int id , string first_name , string last_name , string email , string phone_num )
        {
            _id = id;
            _first_name = first_name ;
            _last_name = last_name ;
            _email = email ;
            _phone_num = phone_num ;
        }

        void set_first_name (string f_name)
        {
            _first_name = f_name ;
        }

        void set_last_name (string l_name)
        {
            _last_name = l_name ;
        }

        void set_email(string email)
        {
            _email = email ;
        }

        void set_phone(string phone)
        {
            _phone_num = phone ;
        }

        string get_full_name ()
        {
            return _first_name + " " + _last_name ;
        }    

        string get_first_name ()
        {
            return _first_name ;
        }

        
        string get_last_name ()
        {
            return _last_name ;
        }

        int get_id ()
        {
            return _id ;
        }

        string get_email ()
        {
            return _email ;
        }

        string get_phone ()
        {
            return _phone_num ;
        }

        void send_emial(string subject , string body)
        {
            cout << "send email to " << _email << "about : " << subject << '\n' << body << endl ;
        }

        void send_sms(string message)
        {
            cout << "send message to " << _phone_num << " " << "\n" << message << endl ;
        }

        void print_info()
        {
            cout << "id :" << _id << endl ;
            cout << "first_name :" << _first_name << endl ;
            cout << "last_name :" << _last_name << endl ;
            cout << "full_name :" << get_full_name() << endl ;
            cout << "email :" << _email << endl ;
            cout << "phone_num :" << _phone_num << endl ;
        }
};

int main ()
{
    person p1(10 , "ahmed" , "alnabelsi" , "ahmed@gmail.com" , "0969....") ;
    p1.send_emial("job" , "wellcome to our team");
    p1.send_sms("hi");
    p1.print_info();    
}