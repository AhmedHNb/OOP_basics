# Calculator.cpp Documentation

This file implements a simple calculator using a C++ class.

## Class `calculator`

A class to perform basic arithmetic operations. It keeps track of the current result, the last operation performed, and the operand used in that operation.

### Private Members

-   `int _result`: Stores the cumulative result of the calculations.
-   `string _operation`: Stores the name of the last operation performed (e.g., "Adding", "Subtracting").
-   `int _op_num`: Stores the last number (operand) used in an operation.

### Public Methods

#### `calculator()`

The constructor for the `calculator` class. It initializes the private member variables to default values:
-   `_result` is set to `0`.
-   `_operation` is set to `"clear"`.
-   `_op_num` is set to `0`.

#### `void add(int num)`

Adds the integer `num` to the current `_result`.

-   **Parameters:**
    -   `num`: The integer to be added.

#### `void sub(int num)`

Subtracts the integer `num` from the current `_result`.

-   **Parameters:**
    -   `num`: The integer to be subtracted.

#### `void div(int num)`

Divides the current `_result` by the integer `num`. It includes a check to prevent division by zero. If `num` is `0`, an error message is printed to `cerr`, and the operation is not performed.

-   **Parameters:**
    -   `num`: The integer to divide by.

#### `void mul(int num)`

Multiplies the current `_result` by the integer `num`.

-   **Parameters:**
    -   `num`: The integer to multiply by.

#### `void clear()`

Resets the calculator to its initial state.
-   `_result` is set to `0`.
-   `_operation` is set to `"Clear"`.
-   `_op_num` is set to `0`.

#### `void print_final_result()`

Prints the last operation performed and the current result to the console. The output format changes slightly if the last operation was `Clear`.

#### `int get_final_result()`

Returns the current value of `_result`.

-   **Returns:** The integer value of the final result.

## `main()` function

The `main` function serves as an example of how to use the `calculator` class. It creates an instance of the calculator, performs a few operations, and prints the result after each operation.
