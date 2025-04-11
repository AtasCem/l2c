#include "student.h"

// Konstruktor-Definition
Student::Student(std::string par_name, int32_t par_id, int16_t par_bank_account_number)
    : name(par_name), id_number(par_id), bank_account_number(par_bank_account_number) {}

// Methode zum Aktualisieren der Bankkontonummer
void Student::update_bank_account(int16_t new_bank_account_number)
{
    bank_account_number = new_bank_account_number;
}

// Methode zum Ausgeben der Studentendaten
void Student::print() const
{
    std::cout << "Name: " << name << "\n";
    std::cout << "ID Number: " << id_number << "\n";
    std::cout << "Bank Account Number: " << bank_account_number << "\n";
}