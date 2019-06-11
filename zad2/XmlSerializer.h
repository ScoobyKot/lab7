
#ifndef JMP2_XMLSERIALIZER_H
#define JMP2_XMLSERIALIZER_H

#include "Serializer.h"

class XmlSerializer : public Serializer {
public:
    XmlSerializer();

    std::string save() override;
};


#endif //JMP2_XMLSERIALIZER_H
