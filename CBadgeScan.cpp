/*! \file CBadgeScan.cpp
    \brief implementation of class BadgeScan
    \author Riccardo Cavagnaro
*/

#include "CBadgeScan.h"
#include <iostream>

using namespace std;

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

/// @brief default constructor
BadgeScan::BadgeScan() : Sensor()
{}

/// @brief constructor 
/// @param type pointer to a string that define the type of the measured value by the badge scanner
/// @param freq sampling frequency of the measurement of the badge scanner
/// @param detectedBadge code of the badge scanned by the badge scanner
BadgeScan::BadgeScan(char* type, float freq, int detectedBadge) : Sensor(type, freq)
{}

/// @brief copy constructor
/// @param r reference to the object to be copied
BadgeScan::BadgeScan(const BadgeScan &r) : Sensor(r)
{}

/// @brief destructor
BadgeScan::~BadgeScan()
{}

/* ----------------------------
   OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
BadgeScan& BadgeScan::operator=(const BadgeScan &r)
{}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two bounding boxes have the same width and the same length  
bool BadgeScan::operator==(const BadgeScan &r)
{}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */

/// @brief default initialization of the object
void BadgeScan::Init()
{}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void BadgeScan::Init(const BadgeScan &r)
{}

/// @brief total reset of the object  
void BadgeScan::Reset()
{}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */
   
/// @brief to set the code of the badge scanned by the badge scanner
void BadgeScan::SetDetBadge(int detectedBadge)
{}

/// @brief to get the code of the badge scanned by the badge scanner
/// @return stato
int BadgeScan::GetDetBadge()
{}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief for debugging: all infos about the object
void BadgeScan::Dump()
{}