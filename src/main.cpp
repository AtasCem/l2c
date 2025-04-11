#include "student.h"
#include <iostream>

auto main() -> int
{
    // Erstelle ein Student-Objekt
    Student student("Cem Atas", 3652498, 1234);

    // Ausgabe der ursprünglichen Daten
    std::cout << "Vor der Änderung der Bankkontonummer:\n";
    student.print();

    // Ändere die Bankkontonummer
    student.update_bank_account(1010);

    // Ausgabe der aktualisierten Daten
    std::cout << "\nNach der Änderung der Bankkontonummer:\n";
    student.print();

    return 0;
}