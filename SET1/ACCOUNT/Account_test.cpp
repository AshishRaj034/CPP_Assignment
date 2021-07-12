#include "account.cpp"
#include <gtest/gtest.h>

TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    EXPECT_EQ(0.0,a1.getmy_accno());
    EXPECT_EQ(0,a1.getmy_nm().length());
}
TEST(Account,ParameterizedConstructor) {
    Account a1(12345678,"Ashish",10000);
    EXPECT_EQ(12345678,a1.gettmy_accno());
    EXPECT_STREQ("Ashish",a1.getmy_nm().c_str());
    EXPECT_EQ(7,a1.getmy_nm().length());
    EXPECT_EQ(10000,a1.getBalance());

}
TEST(Account,CopyConstructor) {
    Account a1(12345678,"Ashish",10000);
    Account a2(a1);
    EXPECT_EQ(12345678,a2.gettmy_accno());
    EXPECT_STREQ("Ashish",a2.getmy_nm().c_str());
    EXPECT_EQ(7,a2.getmy_nm().length());
    EXPECT_EQ(10000,a2.getBalance());

}
TEST(Account,CreditTest) {
    Account a1(12345678,"Ashish",10000);
    a1.credit(30000);
    EXPECT_EQ(40000,a1.getBalance());

}
TEST(Account,DebitTest) {
    Account a1(12345678,"Ashish",10000);
    a1.debit(5000);
    EXPECT_EQ(5000,a.getbalance());
}
TEST(Account,TransactionTest) {
    Account a1(12345678,"Ashish",10000);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}
TEST(Account,DisplayTest) {
    Account a1(12345678,"Ashish",10000);
    std::string ExpectedOut="12345678,Ashish,10000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
