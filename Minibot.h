/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef MINIBOT_H
#define MINIBOT_H

#include "Transformer.h"

class Minibot : public Transformer {
public:
    Minibot();
    void transform() override;
};

#endif // MINIBOT_H