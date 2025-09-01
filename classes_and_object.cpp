#include <iostream>
using namespace std ;

class person 
{

    private :
        string _first_name ;
        string _last_name ;

    public :

        void set_first_name (string f_name)
        {
            _first_name = f_name ;
        }

        void set_last_name (string l_name)
        {
            _last_name = l_name ;
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

    __declspec(property(get = get_first_name , put = set_first_name)) string first_name ;
};

int main ()
{
    person p1 ;
    p1.set_first_name("ahmed");
    p1.set_last_name("alnabelsi");
    cout << p1.first_name << endl ;
    cout << p1.get_last_name() << endl ;
    cout << p1.get_full_name() << endl ;
}