/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "Transformers.h"
#ifndef MINICON_H
#define MINICON_H
#include <iostream>
#include <string>

class minicon : public BaseTransformer {
private:
    std::string _dinosaurForm;
    std::string _dangerous;

public:
    // +1 when an object is created
    static int dinobotCounter;
    // constructor
    minicon();
    // constructor with parameter
    minicon(std::string dinosaur, std::string dangerous);

    std::string getDinosaurForm() const;
    void setDinosaurForm(std::string newDinosaurForm);

    std::string getDangerous() const;
    void setDangerous(std::string newDangerous);
    void aboutRobot() override;
};

#endif