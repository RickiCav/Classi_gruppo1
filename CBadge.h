/*! \file CBadge.h
    \brief Dichiarazione della classe Badge
	\author Alessio Pecorari
*/

#ifndef CBADGE_H
#define CBADGE_H

/// @class Badge
/// @brief classe che rappresenta il badge identificativo del personale
class Badge {
protected:

    /// ID univoco memorizzato nel badge
    int id; 

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Badge(); // costruttore di default
    Badge(int _id); // costruttore parametrizzato
    virtual ~Badge(); // distruttore
    /// @}

    /// @name OPERATORS
    /// @{
    Badge& operator=(const Badge &r);
    bool operator==(const Badge &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Badge &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetId(int _id);
    int GetId() const; // const finale affinchè Id non venga modificato
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}

};

#endif