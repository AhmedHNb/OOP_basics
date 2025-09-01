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

};

class address 
{
    private :
        string _address_line1 ;
        string _address_line2 ;
        string _pobox ;
        string _zip_code ;

    public :
        address (string address_line1 , string address_line2 , string pobox , string zip_code )
        {
            _address_line1 = address_line1 ;
            _address_line2 = address_line2 ;
            _pobox = pobox;
            _zip_code = zip_code ;
        }


        void set_address_line1(string address_line1)
        {
            _address_line1 = address_line1 ;
        }

        void set_address_line2(string address_line2)
        {
            _address_line2 = address_line2 ;
        }

        void set_pobox(string pobox)
        {
            _pobox = pobox ;
        }

        void set_zip_code(string zip_code)
        {
            _zip_code = zip_code ;
        }

        string get_address_line1()
        {
            return _address_line1 ;
        }

        string get_address_line2()
        {
            return _address_line2 ;
        }

        string get_pobox()
        {
            return _pobox ;
        }

        string get_zip_code()
        {
            return _zip_code ;
        }

        void print_address ()
        {
            cout << "address line1 : " << _address_line1 << endl;
            cout << "address line2 : " << _address_line2 << endl;
            cout << "pobox : " << _pobox << endl;
            cout << "zip code : " << _zip_code << endl;
        }

};


int main ()
{
    address address1("damascus" , "shanaya" ,"s16" , "676") ;
    address1.print_address();
}