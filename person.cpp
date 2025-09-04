#include <iostream>
#include "person.h"
#include "employee.h"
#include "developer.h"


using namespace std;

int main()
{
    developer d1(10, "ahmed", "alnabelsi", "ahmed@demo.com", "096955555", 1500, "back-end", "software eng", "C++");
    d1.send_email("job", "welcome to our team");
    d1.send_sms("hi");
    d1.print_info();
}
