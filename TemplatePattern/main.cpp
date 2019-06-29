#include <iostream>
#include <string>

using namespace std;

class GameAI {
    int center;
    int position;
    GameAI* map;
public:
    void turn() {
        void collectResources(bool f);
        void buildNewStructures();
        void buildUnits();
        void attack();
    }

    void collectResources(bool f) {
        if (f) {
            buildStructures();
        }
    }

    virtual void buildStructures() {};
    virtual bool buildUnits() {
        return 0;
    };

    void attack() {
        string enemy;
        if (enemy == ""){
            sendScouts(map->center);
        }
        else{
            sendWarriors(map->position);
        }
    }

    virtual void sendScouts(int position) {};
    virtual void sendWarriors(int position) {};
};

class OrcsAI : public GameAI{
    OrcsAI* scouts;
    OrcsAI* warriors;
    int length;
    bool built;
    bool plan;
    bool go;
public:
    void buildStructures() override {
        if (!built){
            // Строить фермы, затем бараки, а потом цитадель
        }
    }

    bool buildUnits() override {
        if (!built) {
            if (plan){
            }
            else {
            }
        }
        return plan;
    }

    void sendScouts(int position) override {
        if (scouts->length > 0) {
            go = true;
        }
    }

    void sendWarriors(int position) override {
        if (warriors->length > 5) {

        }
    }
};

class MonstersAI : public GameAI {
    bool monster;
public:
    void collectResources() {
        if (monster) {

        }
    }

    void buildStructures() override {

    }

    bool buildUnits() override {
        return monster;
    }
};

int main() {
    OrcsAI orc;
    MonstersAI mon;

    orc.turn();
    mon.turn();

    if (orc.buildUnits()) {
        orc.sendWarriors(5);
        orc.attack();
    }

    if (mon.buildUnits()) {
        mon.collectResources();
    }

    return 0;
}