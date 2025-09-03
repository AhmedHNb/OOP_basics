#include <iostream> 
#include <string> // Include for std::string
#include <stdexcept> // Include for std::runtime_error

class calculator 
{
    private :
        int _result ;
        std::string _operation ;
        int _op_num ;
    
    
    public :
        // Constructor to initialize member variables
        calculator() : _result(0), _operation("clear"), _op_num(0) {}

        void add(int num)
        {
            _op_num = num ;
            _operation = "Adding" ;
            _result += num ;
        }


        void sub(int num)
        {
            _op_num = num ;
            _operation = "Subtracting" ;
            _result -= num ;
        }

        void div(int num)
        {
            if (num == 0)
            {
                // Handle division by zero gracefully
                std::cerr << "Error: Division by zero is not allowed." << std::endl;
                // Or throw an exception
                // throw std::runtime_error("Division by zero");
                return; // Do not perform the operation
            }
            _op_num = num ;
            _operation = "Division by" ;
            _result /= num ;
        }

        void mul(int num)
        {
            _op_num = num ;
            _operation = "Multiplying by" ;
            _result *= num ;
        }

        void clear ()
        {
            _operation = "Clear" ;
            _result = 0 ;     
            _op_num = 0;
        }

        void print_final_result ()
        {
            if (_operation == "Clear")
            {
                std::cout << "Result after " << _operation << " is: " << _result << std::endl;
            }
            else
            {
                std::cout << "Result after " << _operation << " " << _op_num << " is: " << _result << std::endl;
            }
        }

        int get_final_result ()
        {
            return _result ;
        }

};

int main ()
{
    calculator calculator1 ;
    calculator1.clear(); // Good practice to start in a known state
    
    calculator1.add(10) ;
    calculator1.print_final_result();

    calculator1.add(10) ;
    calculator1.print_final_result();

    return 0; // It's good practice for main to return 0 on success
}