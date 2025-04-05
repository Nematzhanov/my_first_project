#include <gtest/gtest.h>
#include "formulas.h"

TEST(FormulasTest, F9Loop) {
    EXPECT_EQ(Formulas::F9_loop(1), 1);
    EXPECT_EQ(Formulas::F9_loop(2), 4);  // 2 + 2*1
    EXPECT_EQ(Formulas::F9_loop(3), 7);  // 1 + 3*2
}

TEST(FormulasTest, F2Loop) {
    EXPECT_EQ(Formulas::F2_loop(1), 1);
    EXPECT_EQ(Formulas::F2_loop(2), 2);
    EXPECT_EQ(Formulas::F2_loop(3), 17); // 3*2 + 2 + 5
}

TEST(FormulasTest, RecursionCounters) {
    int counter = 0;
    Formulas::F9_recursion(counter, 3);
    EXPECT_EQ(counter, 2); // Для n=3: F(3) → F(1)
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}