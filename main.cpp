#include <iostream>
#include <string>
#include <vector>
#include "header/person.h"
#include "problems/arithmetic_slices.h"
#include "problems/paint_house.h"
using namespace std;


int main() {
    //[1,2,3,5]
    //[1,2,3,4,5,8,9,10,20,24,28]
    //vector<int> A = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    //cout<<arithmeticSlice::numberOfArithmeticSlices(A);

    //
    vector<vector<int>> costs = {{2,3,1},{5,4,3},{10,22,12},{22,12,31},{12,2,31},{2,2,7}};

    paint_house ph;
    cout<<ph.minCost(costs);
}