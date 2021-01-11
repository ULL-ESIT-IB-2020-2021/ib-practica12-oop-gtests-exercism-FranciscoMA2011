# include <gtest/gtest.h>

# include "complejos_modificado.h"

TEST(SubtractOperator, positive){
        Complejo complejo_1;
        float numero_f{2.0};
        std::vector <float> numero_complejo_f {1.0, 2.0};
        complejo_1.Add(numero_complejo_f);
        Complejo complejo_2=complejo_1-numero_f;
        std::vector <float> numero_complejo_f_2{1.0, 2.0};
        numero_complejo_f_2.at(0)=numero_complejo_f_2.at(0)-numero_f;
        EXPECT_EQ(complejo_2.AccederComplejo(), numero_complejo_f_2);
}
TEST(SubtractOperator, negative){
        Complejo complejo_1;
        float numero_f{2.0};
        std::vector <float> numero_complejo_f {1.0, 2.0};
        complejo_1.Add(numero_complejo_f);
        Complejo complejo_2=complejo_1-numero_f;
        std::vector <float> numero_complejo_f_2{1.0, 2.0};
        numero_complejo_f_2.at(0)=numero_complejo_f_2.at(0)-numero_f;
        EXPECT_NE(complejo_2.AccederComplejo(), numero_complejo_f);
}