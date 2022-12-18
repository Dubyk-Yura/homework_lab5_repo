#include <iostream>
#include <string>
using namespace std;

class Fish {
public:
    string name;
    string species;
    string preffered_food;
    int age;
    int needed_space_in_m3;
    int size_in_cm;
    int total_volume_in_m3;
    int free_space_in_m3 = 10;
    bool is_aggreessive;

    void  PrintInfoFish() {
        cout << "Name->  " << name << " | Species-> " << species << " | Food->  " << preffered_food << " | Size->  "
            << size_in_cm << " | Age->  " << age << " | Need Space-> " << needed_space_in_m3 << " | Aggressive->  " << is_aggreessive << "|" << endl;
    }
    void print_name() {
        cout << name << endl;
    }
    void print_size() {
        cout << size_in_cm << endl;
    }
    Fish() {};
    Fish(string name, string species, string preffered_food, int size_in_cm,
        int age, int needed_space_in_m3, bool is_aggreessive) {
        this->name = name;
        this->species = species;
        this->preffered_food = preffered_food;
        this->size_in_cm = size_in_cm;
        this->age = age;
        this->needed_space_in_m3 = needed_space_in_m3;
        this->is_aggreessive = is_aggreessive;
    }
};
class Aquarium {
public:
    int number_of_fish = 0;
    Fish Clipboard[1];
    int Space = 10;
    Fish array_fish[999];

    void FishAdd(Fish temp)
    {
        array_fish[number_of_fish] = temp;
        number_of_fish++;
    }
    void SeeAllFish() {
        for (int i = 0; i < number_of_fish; i++) {
            array_fish[i].PrintInfoFish();
        }
    }
    void ThreeBiggest() {
        for (int i = 1; i < number_of_fish; i++)
        {
            for (int j = 1; j < number_of_fish; j++)
            {
                if (array_fish[j].size_in_cm > array_fish[j - 1].size_in_cm)
                {
                    Clipboard[0] = array_fish[j];
                    array_fish[j] = array_fish[j - 1];
                    array_fish[j - 1] = Clipboard[0];
                }
            }
        }
        std::cout << "Stronger" << '\n';
        for (int i = 0; i < 3; i++)
        {
            array_fish[i].PrintInfoFish();
        }
    }
    void PrintVolumeSpace() {
        for (int i = 0; i < number_of_fish; i++) {
            Space += array_fish[i].needed_space_in_m3;
        }
        std::cout << "Fish comfort space -> " << Space << '\n';
    }
};