# include <gtest/gtest.h>

# include "complejos.h"
TEST(ComprobarComplejo, positive){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {1.0, 2.0};
        complejo_2.Add(numero_complejo_f);
        complejo_1.Add(complejo_2.AccederComplejo());
        EXPECT_TRUE(complejo_1.ComprobarComplejo(complejo_1.AccederComplejo()));
        EXPECT_TRUE(complejo_2.ComprobarComplejo(complejo_2.AccederComplejo()));
}
TEST(ComprobarComplejo, negative){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {3.3, 2.2, 2.0};
        complejo_2.Add(numero_complejo_f);
        complejo_1.Add(complejo_2.AccederComplejo());
        EXPECT_FALSE(complejo_1.ComprobarComplejo(complejo_1.AccederComplejo()));
        EXPECT_FALSE(complejo_2.ComprobarComplejo(complejo_2.AccederComplejo()));
}
TEST(Add, positive){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {1.0, 2.0};
        complejo_2.Add(numero_complejo_f);
        complejo_1.Add(complejo_1.AccederComplejo());
        EXPECT_EQ(complejo_1.AccederComplejo(), numero_complejo_f);
        EXPECT_EQ(complejo_2.AccederComplejo(), numero_complejo_f);
}
TEST(Add, negative){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {3.3, 2.2, 2.0};
        complejo_2.Add(numero_complejo_f);
        complejo_1.Add(complejo_2.AccederComplejo());
        EXPECT_NE(complejo_1.AccederComplejo(), numero_complejo_f);
        EXPECT_NE(complejo_2.AccederComplejo(), numero_complejo_f);
}
TEST(Subtract, positive){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {1.0, 2.0};
        complejo_2.Subtract(numero_complejo_f);
        complejo_1.Subtract(complejo_1.AccederComplejo());
        EXPECT_EQ(complejo_1.AccederComplejo(), numero_complejo_f);
        EXPECT_EQ(complejo_2.AccederComplejo(), numero_complejo_f);
}
TEST(Subtract, negative){
        Complejo complejo_1;
        Complejo complejo_2;
        std::vector <float> numero_complejo_f {3.3, 2.2, 2.0};
        complejo_2.Subtract(numero_complejo_f);
        complejo_1.Subtract(complejo_1.AccederComplejo());
        EXPECT_NE(complejo_1.AccederComplejo(), numero_complejo_f);
        EXPECT_NE(complejo_2.AccederComplejo(), numero_complejo_f);
}
