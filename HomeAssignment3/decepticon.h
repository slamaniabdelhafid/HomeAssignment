/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "Transformers.h"
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <iostream>
#include <string>

class decepticon : public BaseTransformer {
private:
    std::string _beastForm;
    std::string _peaceful;

public:
    // constructors
    decepticon();
    decepticon(std::string beast, std::string peace);
    std::string getBeastForm() const;
    void setBeastForm(std::string newBeastForm);

    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    void aboutRobot() override;
};

#endif