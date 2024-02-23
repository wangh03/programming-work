//
// Created by wang on 2/21/24.
//

#ifndef CLION_WORKSPACE_OBJECTIVE_H
#define CLION_WORKSPACE_OBJECTIVE_H

namespace Objective {
    class Objective {
    public:
        [[nodiscard]] virtual double value() const = 0;
    protected:
        Objective();
    };

}

#endif //CLION_WORKSPACE_OBJECTIVE_H
