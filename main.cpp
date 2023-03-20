#include <iostream>

#include "Truckloads.h"

using namespace std;

int main() {

    int numCrates, loadSize;

    cin >> numCrates >> loadSize;

    Truckloads t;

    cout << t.numTrucks(numCrates, loadSize) << endl;

    return 0;

}

// * Output from ChatGPT, OpenAI to Lara Grocke, 20 March 2023