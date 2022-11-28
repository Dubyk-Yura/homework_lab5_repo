#include "lab_5_header.h"


int main() {
    Fish Sudak("Sudak", "aquatic", "Dry foods", 35, 5, 1, true);
    Fish Bersh("Bersh", "aquatic", "Dry foods", 45, 6, 2, true);
    Fish Okun("Okun", "aquatic", "Vacation food", 30, 9, 1, true);
    Fish Chop("Chop", "aquatic", "Vacation food", 50, 12, 2, false);
    Fish Schyka("Schyka", "aquatic", "Vacation food", 70, 25, 3, true);
    Fish Plotva("Plotva", "aquatic", "Vacation food", 20, 4, 1, false);
    Fish Korop("Korop", "aquatic", "Dry foods", 50, 8, 2, false);
    Fish Karas("Karas", "aquatic", "Dry foods", 30, 3, 1, false);
    Fish Pidyst("Pidyst", "aquatic", "Dry foods", 40, 8, 2, true);
    Fish Som("Som", "aquatic", "Vacation food", 100, 10, 4, true);

    Aquarium Safe;
    Safe.FishAdd(Sudak);
    Safe.FishAdd(Bersh);
    Safe.FishAdd(Okun);
    Safe.FishAdd(Schyka);
    Safe.FishAdd(Pidyst);
    Safe.FishAdd(Som);
    Safe.SeeAllFish();
    Safe.ThreeBiggest();
    Safe.PrintVolume_Space();
    cout << "--------------------------------------------------------CHANGE-------------------------------------------------------" << '\n';
    Aquarium Danger;
    Danger.FishAdd(Chop);
    Danger.FishAdd(Plotva);
    Danger.FishAdd(Korop);
    Danger.FishAdd(Karas);
    Danger.SeeAllFish();
    Danger.ThreeBiggest();
    Danger.PrintVolume_Space();

}
