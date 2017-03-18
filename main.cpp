#include <iostream>
#include <string>
#include <vector>
#include "header/person.h"
#include "problems/arithmetic_slices.h"

using namespace std;


int main() {
    //[1,2,3,5]
    //[1,2,3,4,5,8,9,10,20,24,28]
    vector<int> A = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout<<arithmeticSlice::numberOfArithmeticSlices(A);
}