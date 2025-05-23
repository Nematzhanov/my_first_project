//#include <gtest/gtest.h>
//#include "formulas.h"
//
//TEST(FormulasTest, F9LoopTest) {
//    // Базовые случаи
//    EXPECT_EQ(Formulas::F9_loop(1), 1);
//    EXPECT_EQ(Formulas::F9_loop(2), 4);   
//    EXPECT_EQ(Formulas::F9_loop(3), 7);   
//    EXPECT_EQ(Formulas::F9_loop(5), 37);
//}
//
//TEST(FormulasTest, F2LoopTest) {
//   
//    EXPECT_EQ(Formulas::F2_loop(1), 1);
//    EXPECT_EQ(Formulas::F2_loop(2), 2);
//    EXPECT_EQ(Formulas::F2_loop(3), 17); 
//    EXPECT_EQ(Formulas::F2_loop(4), 64);
//}
//
//TEST(FormulasTest, RecursionCounters) {
//    int counter = 0;
//
//    Formulas::F9_recursion(counter, 3);
//    EXPECT_EQ(counter, 2); 
//
//    counter = 0;
//    Formulas::F2_recursion(counter, 4);
//    EXPECT_GT(counter, 2);
//}
//
//TEST(FormulasTest, SumDigitsTest) {
//    EXPECT_EQ(Formulas::SumDigits(0), 0);
//    EXPECT_EQ(Formulas::SumDigits(123), 6);
//    EXPECT_EQ(Formulas::SumDigits(2024), 8);
//    EXPECT_EQ(Formulas::SumDigits(-456), 15);
//}
//
//TEST(FormulasTest, InvalidInputHandling) {
//    // Для n < 1 в F9_loop (если требуется)
//    EXPECT_NO_THROW(Formulas::F9_loop(0));
//    EXPECT_EQ(Formulas::F9_loop(0), 0);
//}
//
//int main(int argc, char** argv) {
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}