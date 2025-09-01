#include <iostream> 
using namespace std ;

class calculator 
{
    private :
        int _result = 0 ;
        string _operation ;
        int _op_num ;
    
    
    public :
        void add(int num)
        {
            _op_num = num ;
            _operation = "Adding" ;
            _result = _result + num ;
        }


        void sub(int num)
        {
            _op_num = num ;
            _operation = "subtrating" ;
            _result = _result - num ;
        }

        void div(int num)
        {
            _op_num = num ;
            _operation = "divsion on" ;
            if(num == 0)
            {
                _result = _result / 1 ;    
            }

            _result = _result / num ;
        }

        void mul(int num)
        {
            _op_num = num ;
            _operation = "multiply by" ;
            _result = _result * num ;
        }

        void clear ()
        {
            _operation = "clear" ;
            _result = 0 ;     
        }

        void print_final_result ()
        {
            if (_operation == "clear")
            {
                cout << "The final result after the" << _operation << " " << " : " << _result ;    
            }
            
            cout << "The final result after " << _operation << " " << _op_num << " : " << _result ;
        }

        int get_final_result ()
        {
            return _result ;
        }

};

int main ()
{
    calculator calculator1 ;
    
    calculator1.add(10) ;
    calculator1.print_final_result();
}