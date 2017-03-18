//
// Created by lixin on 3/16/2017.
//

#ifndef LEETCODEC_ARITHMETIC_SLICES_H
#define LEETCODEC_ARITHMETIC_SLICES_H

#endif //LEETCODEC_ARITHMETIC_SLICES_H

#include <vector>
#include <map>
#include <limits>
using namespace std;

class arithmeticSlice {

public:
    static int getSlices(map<int, int>& slices,vector<int>& A, int index ,int diff){
        int curr = A[index];
        int prev = A[index - 1];
        if (curr - prev == diff){
            slices[index] = slices[index - 1] + 1;
        } else{
            slices[index] = 0;
        }
        return curr - prev;
    }
    static int numberOfArithmeticSlices(vector<int>& A) {
        map<int, int> slices;
        for (auto i = 0; i != A.size(); i++){
            slices[i] = 0;
        }
        int diff = numeric_limits<int>::max();
        for (auto i = 1; i != A.size(); i++){
            diff = getSlices(slices, A, i, diff);
        }
        int result = 0;
        map<int, int>::iterator it;
        for (it = slices.begin(); it != slices.end(); ++it){
            result += it->second;
        }
        return result;
    }

};