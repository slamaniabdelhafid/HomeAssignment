#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot();
    bool transform() override;
};

#endif // AUTOBOT_H