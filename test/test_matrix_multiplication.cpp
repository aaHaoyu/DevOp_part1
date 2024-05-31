#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult


// TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
//     std::vector<std::vector<int>> A = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };
//     std::vector<std::vector<int>> B = {
//         {7, 8},
//         {9, 10},
//         {11, 12}
//     };
//     std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

//     multiplyMatrices(A, B, C, 2, 3, 2);

//     std::vector<std::vector<int>> expected = {
//         {58, 64},
//         {139, 154}
//     };

//     ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
// }

TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {3, 2},
        {3, 2},
        {3, 2}
    };
    std::vector<std::vector<int>> B = {
        {1},
        {2}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 3, 2, 1);

    std::vector<std::vector<int>> expected = {
        {7},
        {7},
        {7}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}
