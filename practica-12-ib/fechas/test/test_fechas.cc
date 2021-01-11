# include <gtest/gtest.h>

# include "fechas.h"
TEST(ObtenerDia, positive){
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_EQ(1, fecha_1.ObtenerDia(fecha_1.AccederFecha()));
        fecha_2.AnyadirFecha("29/02/2021");
        EXPECT_EQ(1, fecha_2.ObtenerDia(fecha_1.AccederFecha()));
}
TEST(ObtenerDia, negative){
        Fecha fecha_1;
        EXPECT_NE(1, fecha_1.ObtenerDia("L/01/2021"));
        EXPECT_NE(1, fecha_1.ObtenerDia("L/01/2021"));
}
TEST(AnyadirFechaTest, positive) {
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_EQ("01/01/2021", fecha_1.AccederFecha());
        fecha_2.AnyadirFecha("29/02/-46");
        EXPECT_EQ("29/02/-46",fecha_2.AccederFecha());
}

TEST(AnyadirFechaTest, negative) {
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01012001");
        EXPECT_NE("01/01/2021", fecha_1.AccederFecha());
        fecha_2.AnyadirFecha("?1r93rhfks11112");
        EXPECT_NE("?1r93rhfks11112", fecha_2.AccederFecha());
}
TEST(GreaterThan, positive){
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        fecha_2.AnyadirFecha("02/02/2022");
        EXPECT_TRUE(fecha_2 > fecha_1);
}