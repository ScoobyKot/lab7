

#ifndef JMP2_SERIALIZABLE_H
#define JMP2_SERIALIZABLE_H

#include "Serializer.h"

class Serializable {
public:
    std::string Serialize(Serializer *serializer);
};


#endif //JMP2_SERIALIZABLE_H
