//
// Created by wang on 2/21/24.
//

#include "Result.h"
#include <iostream>
#include <fstream>

namespace Result{
    double Result::Get_Result(std::string file_path) {
        double Value = 0;
        std::ifstream Result(file_path);
        if (!Result.is_open()) {
            std::cerr << "Failed to open data.txt" << std::endl;
        }
        Result >> Value;
        Result.close();
        std::cout << "Get_Result have been executed! ";
        return Value;
    }
}