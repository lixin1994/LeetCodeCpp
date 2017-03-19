//
// Created by lixin on 3/18/2017.
//

#ifndef LEETCODEC_PAINT_HOUSE_H
#define LEETCODEC_PAINT_HOUSE_H

#endif //LEETCODEC_PAINT_HOUSE_H


#include <vector>
#include <algorithm>

using namespace std;

/*
 * OPT(i, c) = OPT(i-1, tc) for every tc!= c + cost(i,c)
 */
class paint_house {
public:

    int minCost(vector<vector<int>> &costs) {
        if ((costs.size() ==0)||((*costs.begin()).size() ==0)){
            return 0;
        }
        vector<vector<int>> opt;
        for (int j = 0; j < costs.size(); j++) {
            vector<int> temp;
            for (int i = 0; i < (*costs.begin()).size(); i++) {
                if (j == 0) {
                    temp.push_back(costs[0][i]);
                } else{
                    int min_opt;
                    if(i==0) {
                        min_opt = min(opt[j-1][1], opt[j-1][2]);
                    }
                    else if(i==1){
                        min_opt = min(opt[j-1][0], opt[j-1][2]);
                    }
                    else{
                        min_opt = min(opt[j-1][0], opt[j-1][1]);
                    }
                    temp.push_back(min_opt + costs[j][i]);
                }
            }
            opt.push_back(temp);

        }
        auto results = *(--opt.end());
        return *max_element(begin(results),end(results));
    }
};