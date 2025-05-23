//#include "gtest/gtest.h"
//#include "formulas.h"
//
//// Тесты для F2_recursive (Таблица A.7)
//TEST(F2_RecursiveTest, BasicCases) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F2_recursion(counter, 1), 2);
//    EXPECT_EQ(Formulas::F2_recursion(counter, 2), 4);
//}
//
//TEST(F2_RecursiveTest, EvenNumber) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F2_recursion(counter, 4), 6);
//}
//
//TEST(F2_RecursiveTest, OddNumber) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F2_recursion(counter, 3), 3);
//}
//
//TEST(F2_RecursiveTest, EdgeCases) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F2_recursion(counter, 0), 0);
//    EXPECT_EQ(Formulas::F2_recursion(counter, -1), 0);
//}
//
//// Тесты для F2_loop (Таблица A.8)
//TEST(F2_LoopTest, BasicCases) {
//    EXPECT_EQ(Formulas::F2_loop(1), 1);
//    EXPECT_EQ(Formulas::F2_loop(2), 2);
//}
//
//TEST(F2_LoopTest, EvenNumber) {
//    EXPECT_EQ(Formulas::F2_loop(4), 64); // По вашей реализации
//}
//
//TEST(F2_LoopTest, OddNumber) {
//    EXPECT_EQ(Formulas::F2_loop(3), 17); // По вашей реализации
//}
//
//TEST(F2_LoopTest, EdgeCases) {
//    EXPECT_EQ(Formulas::F2_loop(0), 0);
//    EXPECT_EQ(Formulas::F2_loop(-1), 0);
//}
//
//// Тесты для F9_recursive (аналогично таблицам)
//TEST(F9_RecursiveTest, BasicCases) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F9_recursion(counter, 1), 1);
//    EXPECT_EQ(Formulas::F9_recursion(counter, 2), 4);
//}
//
//TEST(F9_RecursiveTest, OddNumber) {
//    int counter = 0;
//    EXPECT_EQ(Formulas::F9_recursion(counter, 3), 7);
//}
//
//// Тесты для F9_loop (аналогично таблицам)
//TEST(F9_LoopTest, BasicCases) {
//    EXPECT_EQ(Formulas::F9_loop(1), 1);
//    EXPECT_EQ(Formulas::F9_loop(2), 4);
//}
//
//TEST(F9_LoopTest, OddNumber) {
//    EXPECT_EQ(Formulas::F9_loop(5), 37);
//}
//
//// Остальные тесты
//TEST(SumDigitsTest, Basic) {
//    EXPECT_EQ(Formulas::SumDigits(2024), 8);
//    EXPECT_EQ(Formulas::SumDigits(-456), 15);
//}
//
//int main(int argc, char** argv) {
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}