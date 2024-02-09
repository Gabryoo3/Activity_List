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
    void addActivity(Date& date, Activity& activity);
    void printDayActivities(const Date& day) const;

private:
    std::map<Date, Activity> activities; //mappa così posso salvare e ricercare per giorno

    //TODO: implementare (fatto)
};


#endif //ACTIVITY_LIST_REGISTER_H
