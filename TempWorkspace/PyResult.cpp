//
// Created by wang on 2/21/24.
//

#include "PyResult.h"
#include "Result.h"
#include <iostream>
#include <string>
namespace Objective{
PyResult::PyResult(Result::Result *result) {
    result_ = result;
    std::string file_path;
    auto PyResult = result_->Get_Result(file_path);
    std::cout << PyResult;
    };

double PyResult::value() const {
    double value = 10;
    return value;
}
}

