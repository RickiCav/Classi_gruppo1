/*! \file CZona.h
    \brief Declaration of the class Zona
    \author Volodymyr Dmytruk
*/

#ifndef CZONA_H
#define CZONA_H

#include <string>
#include "CSensore.h"
#include "CAttuatore.h"

/// Costanti per il tipo di zona (usate anche da Database::SetNewStanza)
static const int ZONA_NEUTRA      = 0;
static const int ZONA_UFFICIO     = 1;
static const int ZONA_LABORATORIO = 2;
static const int ZONA_STORAGE     = 3;

/// @class Zona
/// @brief Classe base che rappresenta un'area del centro di ricerca.
///        Ogni zona contiene un insieme di sensori e attuatori.
class Zona {
protected:
    std::string type;       /// Tipo descrittivo della zona (es. "Ufficio", "Lab")
    int         id;         /// Identificativo univoco della zona

    Sensor**    sensori;    /// Array di puntatori ai sensori della zona
    Attuatore** attuatori;  /// Array di puntatori agli attuatori della zona
    int         numSensori;
    int         numAttuatori;

public:
    Zona(); // costruttore di default
    Zona(std::string type, int id,
         Sensor** sens,    int nSens,
         Attuatore** att,  int nAtt);
    virtual ~Zona(); // distruttore

    // --- getter / setter base ---
    void        SetType(std::string t);
    std::string GetType() const;

    void SetId(int i);
    int  GetId() const;

    // --- accesso a sensori e attuatori ---
    Sensor*    GetSensore(int n)   const;
    Attuatore* GetAttuatore(int n) const;
    int        GetNumSensori()     const;
    int        GetNumAttuatori()   const;

    // --- debug ---
    virtual void Dump() const;
};

// ─────────────────────────────────────────────
// SOTTOCLASSI SPECIFICHE
// ─────────────────────────────────────────────

/// @class Neutra
/// @brief Zona neutra (corridoi, spazi comuni).
///        Accesso libero, nessun target ambientale.
///        Sensori: Fumo. Attuatori: Allarme, Nebulizzatore.
class Neutra : public Zona {
public:
    Neutra();
    Neutra(int id, Sensor** sens, int nSens, Attuatore** att, int nAtt);
};

/// @class Uffici
/// @brief Zona amministrativa con accesso ristretto.
///        Sensori: Fumo, Temp. Attuatori: Allarme, Nebulizzatore, Condizionamento, Porta.
class Uffici : public Zona {
protected:
    float temp_t; /// Temperatura target (°C)

public:
    Uffici();
    Uffici(int id, float temp_t,
           Sensor** sens, int nSens,
           Attuatore** att, int nAtt);

    void  SetTempT(float t);
    float GetTempT() const;

    void Dump() const override;
};

/// @class Laboratorio
/// @brief Zona di ricerca con accesso ristretto.
///        Sensori: Fumo, Temp, Hum. Attuatori: Allarme, Nebulizzatore, Condizionamento, Porta.
class Laboratorio : public Zona {
protected:
    float temp_t; /// Temperatura target (°C)
    float hum_t;  /// Umidità target (%)

public:
    Laboratorio();
    Laboratorio(int id, float temp_t, float hum_t,
                Sensor** sens, int nSens,
                Attuatore** att, int nAtt);

    void  SetTempT(float t);
    float GetTempT() const;

    void  SetHumT(float h);
    float GetHumT() const;

    void Dump() const override;
};

/// @class Storage
/// @brief Zona deposito con accesso ristretto.
///        NOTA: NO Nebulizzatore (danni ai materiali).
///        Sensori: Fumo, Temp, Hum. Attuatori: Allarme, Condizionamento, Porta.
class Storage : public Zona {
protected:
    float temp_t; /// Temperatura target (°C)
    float hum_t;  /// Umidità target (%)

public:
    Storage();
    Storage(int id, float temp_t, float hum_t,
            Sensor** sens, int nSens,
            Attuatore** att, int nAtt);

    void  SetTempT(float t);
    float GetTempT() const;

    void  SetHumT(float h);
    float GetHumT() const;

    void Dump() const override;
};

#endif
