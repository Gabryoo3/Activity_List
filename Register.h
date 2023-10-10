//
// Created by gabry on 06/10/23.
//

#ifndef ACTIVITY_LIST_REGISTER_H
#define ACTIVITY_LIST_REGISTER_H
#include <map>
#include <iostream>
#include "Date.h"
#include "Activity.h"
class Register {
public:
    void addActivity(const Date& date, const Activity& activity);
    void printDayActivities(const Date& day) const;

private:
    std::map<Date, Activity> activities; //mappa così posso ricercare per giorno

    //TODO: implementare
    //TODO: fare in modo di stampare in ordine di ora di inizio o fine
};


#endif //ACTIVITY_LIST_REGISTER_H
