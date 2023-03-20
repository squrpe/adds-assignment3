#ifndef Truckloads_h
#define Truckloads_h

class Truckloads {

public:
    Truckloads(int numCrates, int loadSize);
    int numTrucks();

private:
    int numCrates;
    int loadSize;

    int numTrucksHelper(int numCrates, int loadSize);
    
};

#endif