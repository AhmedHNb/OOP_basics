#include <iostream> 
#include <string> // Include for std::string
#include <stdexcept> // Include for std::runtime_error

using namespace std ;

/**
 * @class calculator
 * @brief A simple calculator class supporting basic arithmetic operations.
 */
class calculator 
{
    private :
        int _result ;           /**< Stores the current result of calculations. */
        string _operation ;     /**< Stores the last operation performed. */
        int _op_num ;           /**< Stores the operand used in the last operation. */
    
    
    public :
        /**
         * @brief Constructor to initialize member variables.
         */
        calculator() : _result(0), _operation("clear"), _op_num(0) {}

        /**
         * @brief Adds a number to the current result.
         * @param num The number to add.
         */
        void add(int num)
        {
            _op_num = num ;
            _operation = "Adding" ;
            _result += num ;
        }


        /**
         * @brief Subtracts a number from the current result.
         * @param num The number to subtract.
         */
        void sub(int num)
        {
            _op_num = num ;
            _operation = "Subtracting" ;
            _result -= num ;
        }

        /**
         * @brief Divides the current result by a number.
         * @param num The number to divide by.
         * @note Division by zero is handled gracefully.
         */
        void div(int num)
        {
            if (num == 0)
            {
                // Handle division by zero gracefully
                cerr << "Error: Division by zero is not allowed." << std::endl;
                // Or throw an exception
                // throw std::runtime_error("Division by zero");
                return; // Do not perform the operation
            }
            _op_num = num ;
            _operation = "Division by" ;
            _result /= num ;
        }

        /**
         * @brief Multiplies the current result by a number.
         * @param num The number to multiply by.
         */
        void mul(int num)
        {
            _op_num = num ;
            _operation = "Multiplying by" ;
            _result *= num ;
        }

        /**
         * @brief Clears the calculator state, resetting the result and operation.
         */
        void clear ()
        {
            _operation = "Clear" ;
            _result = 0 ;     
            _op_num = 0;
        }

        /**
         * @brief Prints the result after the last operation.
         */
        void print_final_result ()
        {
            if (_operation == "Clear")
            {
                cout << "Result after " << _operation << " is: " << _result << std::endl;
            }
            else
            {
                cout << "Result after " << _operation << " " << _op_num << " is: " << _result << std::endl;
            }
        }

        /**
         * @brief Gets the current result.
         * @return The current result as an integer.
         */
        int get_final_result ()
        {
            return _result ;
        }

};

/**
 * @brief Main function demonstrating usage of the calculator class.
 * @return int Returns 0 on success.
 */
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