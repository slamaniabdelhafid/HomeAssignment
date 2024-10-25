/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot();
    bool transform() override;
};

#endif // AUTOBOT_H