//
//  SizeMismatchException.hpp
//  Exercise 1
//
//  Created by Changheng Chen on 2/9/17.
//  Copyright © 2017 Changheng Chen. All rights reserved.
//

#ifndef SizeMismatchException_hpp
#define SizeMismatchException_hpp

#include "ArrayException.hpp"
#include <sstream>

class SizeMismatchException : public ArrayException
{
private:
    string m_chars;
    
public:
    SizeMismatchException(string chars)
    { // Constructor with "chars" as input, and store to data member
        
        m_chars = chars;
    }
    
    string GetMessage()
    { // Return the the error message
        
        stringstream ss;
        ss << "The sizes of the arrays " << m_chars << "." << endl;
        
        return ss.str();
    }
};

#endif /* SizeMismatchException_hpp */