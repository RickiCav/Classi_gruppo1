#ifndef CATTUATORE_H
#define CATTUATORE_H

/// @class Attuatore
/// @brief Classe base per i dispositivi che intervengono sull'ambiente
class Attuatore {
protected:
    bool stato; /// Stato dell'attuatore: true (attivo), false (inattivo)

public:
    Attuatore(); // costruttore di default
    virtual ~Attuatore(); // distruttore

    // metodi virtuali per attivare/disattivare gli attuatori figli
    virtual void Attiva();
    virtual void Disattiva();

    // metodo per ottenere lo stato dell'attuatore
    bool IsAttivo() const;
};

/// -- SOTTOCLASSI SPECIFICHE

/// @class Allarme sonoro antincendio
/// @brief Da disattivare manualmente
class Allarme : public Attuatore {
public:
    Allarme();
    void Disattiva() override;
};

/// @class Nebulizzatore
/// @brief Erogatore di acqua nebulizzata per estinguere incendi
class Nebulizzatore : public Attuatore {
public:
    Nebulizzatore();
    void Disattiva() override; /// Deve essere disattivato manualmente
};

/// @class Condizionamento
/// @brief Sistema per modificare temperatura e umidità
class Condizionamento : public Attuatore {
public:
    Condizionamento();
    // La logica di disattivazione automatica sarà gestita dal Database
};

/// @class Porta
/// @brief Attuatore che consente l'apertura della porta
class Porta : public Attuatore {
public:
    Porta();
};

#endif