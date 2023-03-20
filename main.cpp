#include <iostream>

#include "Truckloads.h"

using namespace std;

int main() {

    int numCrates, loadSize;

    cin >> numCrates >> loadSize;

    Truckloads t(numCrates, loadSize);

    cout << t.numTrucks() << endl;

    return 0;

}