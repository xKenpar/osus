#pragma once
#include <vector>
#include <string>

struct HitObjectData{
    int x;
    int y;
    int time;
    int type;
    int hitSound;
    
    char curveType;
    std::vector<std::pair<int,int> > curvePoints;
    int slides;
    float length;
    std::vector<int> edgeSounds;
    std::vector<std::pair<int, int> > edgeSets;

    int endTime;

    int normalSet;
    int additionSet;
    int index;
    int volume;
    std::string filename;
    bool startingACombo;
    int skipComboColours;
    bool useDefaultHitSound;
};

class HitObject{
    public:
        HitObject(){};
        ~HitObject() = default;
        virtual void init(){};
        virtual void render(){};
        virtual void update(){};
    private:

};

class Circle : public HitObject{
    public:
        Circle(HitObjectData data);
        void init();
        void render();
        void update();
    private:
        HitObjectData data;
};