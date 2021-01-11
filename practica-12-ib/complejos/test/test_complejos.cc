# include <gtest/gtest.h>

# include "complejos.h"
TEST(Add, positive){
        Complejo complejo_1;
        Complejo complejo_2;
        complejo_1.AnyadirComplejo("01/01/2021");
        complejo_2.AnyadirComplejo("02/02/2022");
        EXPECT_TRUE(complejo_2 > complejo_1);
}
TEST(Add, negative){
        Complejo complejo_1;
        Complejo complejo_2;
        complejo_2.AnyadirComplejo("01/01/2021");
        complejo_1.AnyadirComplejo("02/02/2022");
        EXPECT_TRUE(complejo_2 > complejo_1);
}
TEST(Subtract, positive){
        Complejo complejo_1;
        Complejo complejo_2;
        complejo_1.AnyadirComplejo("01/01/2021");
        complejo_2.AnyadirComplejo("02/02/2022");
        EXPECT_TRUE(complejo_2 > complejo_1);
}
TEST(Subtract, negative){
        Complejo complejo_1;
        Complejo complejo_2;
        complejo_2.AnyadirComplejo("01/01/2021");
        complejo_1.AnyadirComplejo("02/02/2022");
        EXPECT_TRUE(complejo_2 > complejo_1);
}
