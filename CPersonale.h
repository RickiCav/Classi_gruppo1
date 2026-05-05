/*! \file CPersonale.h
    \brief Dichiarazione della classe Personale
	\author Alessio Pecorari
*/

#ifndef CPERSONALE_H
#define CPERSONALE_H

#include <string>
#include "CBadge.h"

using namespace std;

/// @class Personale
/// @brief classe base per le figure del centro (Amministrativi, Ricercatori, Tecnici) 
class Personale {
protected:

    string nome;
    string cognome;
    /// Ogni membro ha un badge per l'accesso
    Badge* badge;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Personale(); // costruttore di default
    Personale(string nP, string cP, Badge* bP); // costruttore parametrizzato
    virtual ~Personale();   // distruttore
    /// @}

    /// @name OPERATORS
    /// @{
    Personale& operator=(const Personale &r);
    bool operator==(const Personale &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Personale &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{ 
    void SetNome(string nP);
    std::string GetNome() const;

    void SetCognome(string cP);
    std::string GetCognome() const;

    void SetBadge(Badge* bP);
    Badge* GetBadge() const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}
};

#endif