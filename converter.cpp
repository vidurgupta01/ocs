//
//  converter.cpp
//  ObjectiveCtoSwift
//
//  Created by Vidur Gupta on 6/17/15.
//  Copyright (c) 2015 Vidur Gupta. All rights reserved.
//

#include "converter.h"

using namespace std;

string methodConstructorConvert(string objc_method) {
    /* We are assuming a Objective-C method given here has proper syntax */
    
    /* Check if string is not null or if it is not equal to "" */
    if (objc_method.empty()) exit(0);
    
    /* Remove trailing, leading & extra spaces */
    objc_method.erase(unique(objc_method.begin(), objc_method.end(), [](char a, char b)
                             { return a == ' ' & b == ' '; } ), objc_method.end() );
    
    /* If the method starts with a space,
     then we should remove that space to avoid confusions */
    if (objc_method.at(0) == ' ') objc_method.erase(0,1);
    
    /* If the method is like "- (void)" instead of "-(void)",
     then we should remove that space to avoid confusions */
    if (objc_method.find(" (") != -1) objc_method.erase(1,1);
    
    /* Declare Swift Method Variable */
    string swift_method;
    
    /* Depending on '+' or '-', add "class func" or "func" */
    swift_method += (objc_method.at(0) == '-') ? "func ":"class func ";
    
    /* Now we will split the string into a string[] with the space as a delimeter */
    
    
    return swift_method;
}