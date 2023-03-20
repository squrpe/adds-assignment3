#include <iostream>
#include "Truckloads.h"

using namespace std;

Truckloads::Truckloads() {
    numCrates = 0;
    loadSize = 0;
}


int Truckloads::numTrucks(int numCrates, int loadSize) {

    if (numCrates <= loadSize) {
        return 1;
    }

    if (numCrates % 2 == 0) {
        return 2 * numTrucks(numCrates / 2, loadSize);
    } else {
        return numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2 + 1, loadSize);
    }

}

// int Truckloads::numTrucksHelper(int numCrates, int loadSize) {

//     if (numCrates <= loadSize) {
//         return 1;
//     }

//     if (numCrates % 2 == 0) {
//         return 2 * numTrucksHelper(numCrates / 2, loadSize);
//     } else {
//         return numTrucksHelper(numCrates / 2, loadSize) + numTrucksHelper(numCrates / 2 + 1, loadSize);
//     }

// }