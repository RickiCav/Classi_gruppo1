/*! \file CAttuatore.h
    \brief Dichiarazione della classe Attuatore
	\author Alessio Pecorari
*/

#ifndef CATTUATORE_H
#define CATTUATORE_H

using namespace std;

/// @class Attuatore
/// @brief classe base per i dispositivi che intervengono sull'ambiente
class Attuatore {
protected:

    // stato dell'attuatore: true (attivo), false (inattivo)
    bool stato; 

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Attuatore();
    virtual ~Attuatore();
    /// @}

    /// @name OPERATORS
    /// @{
    Attuatore& operator=(const Attuatore &r);
    bool operator==(const Attuatore &r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Attuatore &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    virtual void Attiva();
    virtual void Disattiva();
    bool IsAttivo() const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}
};

/// @class Allarme sonoro antincendio
/// @brief da disattivare manualmente
class Allarme : public Attuatore {
public:
    Allarme();
    void Disattiva() override;
};

/// @class Nebulizzatore
/// @brief erogatore di acqua nebulizzata per estinguere incendi
class Nebulizzatore : public Attuatore {
public:
    Nebulizzatore();
    void Disattiva() override;
};

/// @class Condizionamento
/// @brief sistema per modificare temperatura e umidità
class Condizionamento : public Attuatore {
public:
    Condizionamento();
    // La logica di disattivazione automatica sarà gestita dal Database
};

/// @class Porta
/// @brief attuatore che consente l'apertura della porta
class Porta : public Attuatore {
public:
    Porta();
};

#endif