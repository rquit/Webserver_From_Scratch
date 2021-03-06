//
// Created by Nabil on 3/2/2022.
//

#ifndef WSLWEBSERVER_FILEPARSER_H
#define WSLWEBSERVER_FILEPARSER_H

#include "SimpleParser.h"
#include <fstream>

namespace Nabil_Omi_WSL {

class FileParser : public SimpleParser<std::string> {
public:
    explicit FileParser(const std::string& toParse);
};

}

#endif //WSLWEBSERVER_FILEPARSER_H
