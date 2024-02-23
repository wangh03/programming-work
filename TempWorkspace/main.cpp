#include <iostream>
#include "Objective.h"
#include "Result.h"
#include "PyResult.h"

int main() {
    Objective::Objective *Pointer1;
    Objective::PyResult *Pointer2;
    Result::Result *Pointer3;
    std::string file_path = "Result.txt";
    auto value = Pointer1->value();
    auto value2 = Pointer2->value();
    auto value3 = Pointer3->Get_Result(file_path);
    std::cout << "The Result1 is " << value <<"\n";
    std::cout << "The Result2 is " << value2 <<"\n";
    std::cout << "The Result3 is " << value3 <<"\n";
    return 0;
}
