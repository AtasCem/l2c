#include <iostream>
#include <string>

class Student
{
   public:
    std::string name;
    int32_t id_number;
    
    Student(std::string par_name, int32_t par_id, int16_t par_bank_account_number);

    void update_bank_account(int16_t new_bank_account_number);

    void print() const;

    private:
    int16_t bank_account_number;
};