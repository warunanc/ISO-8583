//    File: <#class>.hpp
//  Author: drs. Robert E. Swart
//    Date: <#date>
//    Time: <#time>
// Version: 0.01
// Generated by: HeadGen 2.0 (c) 1995-2001 by Bob Swart (aka Dr.Bob - www.drbob42.com)
// Changes:
//

#ifndef <#class>_hpp
#define <#class>_hpp

#include <iostream.h>
<#includebase>

template <class <#templatechar>> class <#class> <#publicbase>
{
  public:
    // Constructors & Destructors
    <#class>(void);
    <#class>(const <#class><#template>& copy);
    virtual ~<#class>(void);

    // Accessing functions

    // Modifier functions

    // Operator overloading
    <#class><#template>& operator = (const <#class><#template>& other);
    int operator == (const <#class><#template>& other) const;

    // Streaming output
    friend ostream& operator << (ostream& os, const <#class><#template>& other);

  protected:
  private:
};

#endif