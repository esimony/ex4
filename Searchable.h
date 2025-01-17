//
// Created by reut on 1/18/20.
//

#ifndef EX4_SEARCHABLE_H
#define EX4_SEARCHABLE_H

#include <vector>
#include "State.h"
using namespace std;

template <class T>
class Searchable {
public:
    virtual State<T>* getInitialState() = 0;
    virtual State<T>* getGoalState() = 0;
    virtual bool isGoalState(State<T>* state) = 0;
    virtual vector<State<T>*> getAllPossibleStates(State<T> *s) = 0;
    virtual double calculateHeuristic(State<T>* current, State<T>* goal) = 0;
    };

#endif //EX4_SEARCHABLE_H
