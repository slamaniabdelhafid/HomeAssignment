#ifndef VEHICLETRANSFORMER_H
#define VEHICLETRANSFORMER_H

#include "Transformer.h"

class VehicleTransformer : public Transformer {
public:
    VehicleTransformer();
    bool drive();
};

#endif // VEHICLETRANSFORMER_H