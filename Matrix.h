//
// Created by reut on 1/19/20.
//

#ifndef EX4_MATRIX_H
#define EX4_MATRIX_H

#include <vector>
#include "Searchable.h"

class Matrix : public Searchable<Point>{
private:
    vector<vector<State<Point>>> matrix;
     State<Point> startPoint;
     State<Point> goalPoint;
public:
    State<Point> getInitialState();
    State<Point> getGoalState();
    bool isGoalState();
    vector<State<Point>> getAllPossibleStates(State<Point> s);
};


#endif //EX4_MATRIX_H