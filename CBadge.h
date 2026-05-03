#ifndef CBADGE_H
#define CBADGE_H

/// @class Badge
/// @brief Classe che rappresenta il badge identificativo del personale
class Badge {
protected:
    int id; /// ID univoco memorizzato nel badge

public:
    Badge(); // costruttore di default
    Badge(int _id); // costruttore parametrizzato
    virtual ~Badge(); // distruttore

    void SetId(int _id);
    int GetId() const; // const finale affinchè Id non venga modificato
};

#endif