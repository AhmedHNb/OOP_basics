#include <iostream>
using namespace std ;

class person 
{

    private :
        string first_name ;
        string last_name ;

    public :

        void set_first_name (string f_name)
        {
            first_name = f_name ;
        }

        void set_last_name (string l_name)
        {
            last_name = l_name ;
        }

        string get_full_name ()
        {
            return first_name + " " + last_name ;
        }    

        string get_first_name ()
        {
            return first_name ;
        }

        string get_last_name ()
        {
            return last_name ;
        }
};

int main ()
{
    person p1 ;
    p1.set_first_name("ahmed");
    p1.set_last_name("alnabelsi");
    cout << p1.get_first_name() << endl ;
    cout << p1.get_last_name() << endl ;
    cout << p1.get_full_name() << endl ;
}