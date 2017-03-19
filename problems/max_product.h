//
// Created by lixin on 3/19/2017.
//

#ifndef LEETCODEC_MAX_PRODUCT_H
#define LEETCODEC_MAX_PRODUCT_H

#endif //LEETCODEC_MAX_PRODUCT_H

#include <vector>
#include <algorithm>

using namespace std;


class max_product {
public:
    int maxProduct(vector<int> &nums) {
        vector<int> pos_result;
        vector<int> neg_result;
        if (nums.size() ==0){
            return 0;
        }
        pos_result.push_back(nums[0]);
        neg_result.push_back(nums[0]);

        for(int i=1; i< nums.size(); i++){
            pos_result.push_back(max(max(pos_result[i-1]*nums[i],nums[i]),neg_result[i-1]*nums[i]));
            neg_result.push_back(min(min(pos_result[i-1]*nums[i],nums[i]),neg_result[i-1]*nums[i]));
        }
        return *max_element(pos_result.begin(),pos_result.end());
    }
};