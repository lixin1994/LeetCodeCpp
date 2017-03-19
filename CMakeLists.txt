cmake_minimum_required(VERSION 3.6)
project(LeetCodeC__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        header/person.h
        main.cpp problems/arithmetic_slices.h problems/paint_house.h header/aa_tree.h header/binary_node.h problems/three_sum.h problems/max_product.h)

add_executable(LeetCodeC__ ${SOURCE_FILES})