//
// Created by lixin on 2/26/2017.
//

#ifndef CLIONTEST_PERSON_H
#define CLIONTEST_PERSON_H

#endif //CLIONTEST_PERSON_H
#include <string>
#include <vector>
using namespace std;
class person{
private:
    string name;
    int height;
    int weight;
    vector<person> siblings;

public:
    static int count;
    person();
    person(const string &name, int height, int weight);

public:
    const string &getName() const;

    void setName(const string &name);

    int getHeight() const;

    void setHeight(int height);

    int getWeight() const;

    void setWeight(int weight);

    void addSubling(person &p);

    static int getCount();


};

const string &person::getName() const {
    return name;
}

void person::setName(const string &name) {
    person::name = name;
}

int person::getHeight() const {
    return height;
}

void person::setHeight(int height) {
    person::height = height;
}

int person::getWeight() const {
    return weight;
}

void person::setWeight(int weight) {
    person::weight = weight;
}


person::person(const string &name, int height, int weight) : name(name), height(height), weight(weight) {}

person::person() {name = ""; height = 0; weight = 0; count ++;}

void person::addSubling(person &p) {
    person::siblings.push_back(p);
}

int person::getCount() {
    return count;
}
int person::count = 0;