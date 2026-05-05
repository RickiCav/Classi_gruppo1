/*! \file CZona.cpp
    \brief Implementation of the class Zona
    \author Volodymyr Dmytruk
*/

#include "CZona.h"
#include <iostream>

using namespace std;

// ─────────────────────────────────────────────
// ZONA  –  classe base
// ─────────────────────────────────────────────

Zona::Zona()
    : type(""), id(-1),
      sensori(nullptr), attuatori(nullptr),
      numSensori(0), numAttuatori(0)
{}

Zona::Zona(string type, int id,
           Sensor** sens,   int nSens,
           Attuatore** att, int nAtt)
    : type(type), id(id),
      sensori(sens), attuatori(att),
      numSensori(nSens), numAttuatori(nAtt)
{}

Zona::~Zona()
{
    // Le zone non sono owner degli array: la memoria
    // è gestita da chi ha creato sensori e attuatori.
}

// --- getter / setter ---

void Zona::SetType(string t) { type = t; }
string Zona::GetType() const { return type; }

void Zona::SetId(int i) { id = i; }
int  Zona::GetId() const { return id; }

Sensor* Zona::GetSensore(int n) const {
    if (n < 0 || n >= numSensori) return nullptr;
    return sensori[n];
}

Attuatore* Zona::GetAttuatore(int n) const {
    if (n < 0 || n >= numAttuatori) return nullptr;
    return attuatori[n];
}

int Zona::GetNumSensori()    const { return numSensori; }
int Zona::GetNumAttuatori()  const { return numAttuatori; }

void Zona::Dump() const {
    cout << "[Zona] Type: " << type
         << " | ID: "       << id
         << " | Sensori: "  << numSensori
         << " | Attuatori: "<< numAttuatori
         << endl;
}

// ─────────────────────────────────────────────
// NEUTRA  –  zona neutra
// ─────────────────────────────────────────────

Neutra::Neutra()
    : Zona("Neutro", -1, nullptr, 0, nullptr, 0)
{}

Neutra::Neutra(int id, Sensor** sens, int nSens, Attuatore** att, int nAtt)
    : Zona("Neutro", id, sens, nSens, att, nAtt)
{}

// ─────────────────────────────────────────────
// UFFICI  –  zona amministrativa
// ─────────────────────────────────────────────

Uffici::Uffici()
    : Zona("Ufficio", -1, nullptr, 0, nullptr, 0), temp_t(20.0f)
{}

Uffici::Uffici(int id, float temp_t,
               Sensor** sens, int nSens,
               Attuatore** att, int nAtt)
    : Zona("Ufficio", id, sens, nSens, att, nAtt), temp_t(temp_t)
{}

void  Uffici::SetTempT(float t) { temp_t = t; }
float Uffici::GetTempT() const  { return temp_t; }

void Uffici::Dump() const {
    Zona::Dump();
    cout << "  TempTarget: " << temp_t << " C" << endl;
}

// ─────────────────────────────────────────────
// LABORATORIO  –  zona di ricerca
// ─────────────────────────────────────────────

Laboratorio::Laboratorio()
    : Zona("Laboratorio", -1, nullptr, 0, nullptr, 0),
      temp_t(20.0f), hum_t(50.0f)
{}

Laboratorio::Laboratorio(int id, float temp_t, float hum_t,
                         Sensor** sens, int nSens,
                         Attuatore** att, int nAtt)
    : Zona("Laboratorio", id, sens, nSens, att, nAtt),
      temp_t(temp_t), hum_t(hum_t)
{}

void  Laboratorio::SetTempT(float t) { temp_t = t; }
float Laboratorio::GetTempT() const  { return temp_t; }

void  Laboratorio::SetHumT(float h)  { hum_t = h; }
float Laboratorio::GetHumT() const   { return hum_t; }

void Laboratorio::Dump() const {
    Zona::Dump();
    cout << "  TempTarget: " << temp_t << " C"
         << " | HumTarget: " << hum_t  << " %" << endl;
}

// ─────────────────────────────────────────────
// STORAGE  –  zona deposito
// ─────────────────────────────────────────────

Storage::Storage()
    : Zona("Storage", -1, nullptr, 0, nullptr, 0),
      temp_t(18.0f), hum_t(40.0f)
{}

Storage::Storage(int id, float temp_t, float hum_t,
                 Sensor** sens, int nSens,
                 Attuatore** att, int nAtt)
    : Zona("Storage", id, sens, nSens, att, nAtt),
      temp_t(temp_t), hum_t(hum_t)
{}

void  Storage::SetTempT(float t) { temp_t = t; }
float Storage::GetTempT() const  { return temp_t; }

void  Storage::SetHumT(float h)  { hum_t = h; }
float Storage::GetHumT() const   { return hum_t; }

void Storage::Dump() const {
    Zona::Dump();
    cout << "  TempTarget: " << temp_t << " C"
         << " | HumTarget: " << hum_t  << " %" << endl;
}
