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
        person(){}
        
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

class employee : public person 
{
    private : 
        int _salary ;
        string _tilte ;
        string _department ;
    
    public :
        
        void set_salary(int salary) 
        {
            _salary = salary;
        }

        int get_salary() 
        {
            return _salary;
        }
        
        void set_title(string title) 
        {
            _tilte = title;
        }
        
        string get_title() 
        {
            return _tilte;
        }
        
        void set_department(string department)
        {
            _department = department;
        }
        
        string get_department()
        {
            return _department;
        }
        
        void print_info() 
        {
            person::print_info();
            cout << "Salary: " << _salary << endl;
            cout << "Title: " << _tilte << endl;
            cout << "Department: " << _department << endl;
        }
};


int main ()
{
    employee p1;
    p1.set_first_name("ahmed") ;
    p1.set_last_name("alnabelsi");
    p1.set_email("ahmed@demo.com");
    p1.set_phone("555-5555");
    p1.set_title("Software Engineer");
    p1.set_department("IT");
    p1.set_salary(80000);
    p1.send_emial("job" , "wellcome to our team");
    p1.send_sms("hi");
    p1.print_info();    
}
