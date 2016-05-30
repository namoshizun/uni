#ifndef MEMENTO_H
#define MEMENTO_H
#include "state.h"
#include <QDebug>

class Memento
{
public:
    Memento(ViewState toSave,
            std::string action)  :
        state(toSave) // deep copy the given state
      , action(action)
    {
    }
     ~Memento() {}

private:
    friend class Dialog;

    Memento();
    const ViewState& getState() const { return state; }

private:
    ViewState state;
    std::string action;
};

#endif // MEMENTO_H
