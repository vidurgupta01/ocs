//
//  test.cpp
//  ObjectiveCtoSwift
//
//  Created by Vidur Gupta on 6/17/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include <iostream>
#include "converter.h"

int main(int argc, const char *argv[]) {
    std::string method = methodConstructorConvert("     -     (NSString)      function_name");
    std::cout << method << std::endl;
    return 0;
}
