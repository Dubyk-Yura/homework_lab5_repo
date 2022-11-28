#include <iostream>
#include <string>
using namespace std;

class Fish {
public:
    string name;
    string species;
    string prefferedFood;
    int age;
    int neededSpace_in_m3;
    int size_in_cm;
    int totalVolume_in_m3;
    int freeSpace_in_m3 = 10;
    bool isAggressive;

    void printInfoFish() {
        cout << "Name->  " << name << " | Species-> " << species << " | Food->  " << prefferedFood << " | Size->  "
            << size_in_cm << " | Age->  " << age << " | Need Space-> " << neededSpace_in_m3 << " | Aggressive->  " << isAggressive << "|" << endl;
    }
    void printname() {
        cout << name << endl;
    }
    void printsize() {
        cout << size_in_cm << endl;
    }
    Fish() {};
    Fish(string name, string species, string prefferedFood, int size_in_cm,
        int age, int neededSpace_in_m3, bool isAggressive) {
        this->name = name;
        this->species = species;
        this->prefferedFood = prefferedFood;
        this->size_in_cm = size_in_cm;
        this->age = age;
        this->neededSpace_in_m3 = neededSpace_in_m3;
        this->isAggressive = isAggressive;
    }
};
class Aquarium {
public:
    int numberoffish = 0;
    Fish Clipboard[1];
    int Space = 10;
    Fish arrayfish[999];

    void FishAdd(Fish Fishh)
    {
        arrayfish[numberoffish] = Fishh;
        numberoffish++;
    }
    void SeeAllFish() {
        for (int i = 0; i < numberoffish; i++) {
            arrayfish[i].printInfoFish();
        }
    }
    void ThreeBiggest() {
        for (int i = 1; i < numberoffish; i++)
        {
            for (int j = 1; j < numberoffish; j++)
            {
                if (arrayfish[j].size_in_cm > arrayfish[j - 1].size_in_cm)
                {
                    Clipboard[0] = arrayfish[j];
                    arrayfish[j] = arrayfish[j - 1];
                    arrayfish[j - 1] = Clipboard[0];
                }
            }
        }
        std::cout << "Stronger" << '\n';
        for (int i = 0; i < 3; i++)
        {
            arrayfish[i].printInfoFish();
        }
    }
    void PrintVolume_Space() {
        for (int i = 0; i < numberoffish; i++) {
            Space += arrayfish[i].neededSpace_in_m3;
        }
        std::cout << "Fish comfort space -> " << Space << '\n';
    }
};