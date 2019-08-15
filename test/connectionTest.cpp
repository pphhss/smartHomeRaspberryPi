#include "connection.h"
#include <gtest/gtest.h>

TEST(openANDclose, complete){
    connection conn;
    int openRet = conn.open(8080);
    ASSERT_EQ(openRet, 1);
    int closeRet = conn.close();
    ASSERT_EQ(closeRet,1);
}
