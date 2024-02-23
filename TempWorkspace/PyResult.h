//
// Created by wang on 2/21/24.
//

#ifndef CLION_WORKSPACE_PYRESULT_H
#define CLION_WORKSPACE_PYRESULT_H

#include "Objective.h"
#include "Result.h"

namespace Objective {
    class PyResult:Objective {
    public:
        PyResult(Result::Result *result);
        double value() const;
    private:
        Result::Result *result_;
    };
}

#endif //CLION_WORKSPACE_PYRESULT_H
