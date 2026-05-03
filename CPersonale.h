#ifndef CPERSONALE_H
#define CPERSONALE_H

#include <string>
#include "CBadge.h"

/// @class Personale
/// @brief Classe base per le figure del centro (Amministrativi, Ricercatori, Tecnici) 
class Personale {
protected:
    std::string nome;
    std::string cognome;
    Badge* badge; /// Ogni membro ha un badge per l'accesso

public:
    Personale(); // costruttore di default
    Personale(std::string nP, std::string cP, Badge* bP); // costruttore parametrizzato
    virtual ~Personale();   // distruttore

    // metodo nome
    void SetNome(std::string nP);
    std::string GetNome() const;

    // metodo cognome
    void SetCognome(std::string cP);
    std::string GetCognome() const;

    // metodo badge
    void SetBadge(Badge* bP);
    Badge* GetBadge() const;
};

#endif