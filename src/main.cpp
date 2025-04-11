#include "student.h"
#include <iostream>

auto main() -> int
{
    {
        Student itsme(std::string("Cem"), 49589, 8533489684);
        itsme.update_bank_account(11111111111);
        itsme.print();
    }
}