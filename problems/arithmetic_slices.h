//
// Created by lixin on 3/16/2017.
//

#ifndef LEETCODEC_ARITHMETIC_SLICES_H
#define LEETCODEC_ARITHMETIC_SLICES_H

#endif //LEETCODEC_ARITHMETIC_SLICES_H

#include <vector>
#include <map>
using namespace std;

int getSlices(map<int, int>& slices, int prev, int curr ,int diff){
    if (curr - prev == diff){
        slices[curr] = 2 * slices[prev] + 1;
    } else{
        slices[curr] = 0;
    }
    return curr - prev;
}
int numberOfArithmeticSlices(vector<int>& A) {
    map<int, int> slices;
    for (auto i = A.begin(); i != A.end(); i++){
        slices[*i] = 0;
    }
    int diff = 0;
    for (auto i = A.begin(); i != A.end(); i++){
        getSlices(slices, *i, *(i+1),
    }
}