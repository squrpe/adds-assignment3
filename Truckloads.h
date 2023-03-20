#ifndef Truckloads_h
#define Truckloads_h

class Truckloads {

public:
    Truckloads(int numCrates, int loadSize);
    int numTrucks(int numCrates, int loadSize);

private:
    int numCrates;
    int loadSize;
    
};

#endif