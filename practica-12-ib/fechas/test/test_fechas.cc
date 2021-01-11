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
TEST(ObtenerMes, positive){
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_EQ(1, fecha_1.ObtenerDia(fecha_1.AccederFecha()));
        fecha_2.AnyadirFecha("29/02/2021");
        EXPECT_EQ(1, fecha_2.ObtenerDia(fecha_1.AccederFecha()));
}
TEST(ObtenerMes, negative){
        Fecha fecha_1;
        EXPECT_NE(1, fecha_1.ObtenerMes("01/L/2021"));
        EXPECT_NE(1, fecha_1.ObtenerMes("01/L/2021"));
}
TEST(ObtenerAnyo, positive){
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_EQ(1, fecha_1.ObtenerDia(fecha_1.AccederFecha()));
        fecha_2.AnyadirFecha("29/02/2021");
        EXPECT_EQ(1, fecha_2.ObtenerDia(fecha_1.AccederFecha()));
}
TEST(ObtenerAnyo, negative){
        Fecha fecha_1;
        EXPECT_NE(1, fecha_1.ObtenerDia("01/01/L"));
        EXPECT_NE(1, fecha_1.ObtenerDia("01/01/L"));
}
TEST(ComprobarFechaTest, positive) {
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_EQ(true, fecha_1.ComprobarFecha(fecha_1.AccederFecha()));
        fecha_2.AnyadirFecha("29/02/-46");
        EXPECT_EQ(true,fecha_2.ComprobarFecha(fecha_2.AccederFecha()));
}

TEST(AnyadirFechaTest, negative) {
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_1.AnyadirFecha("01012001");
        EXPECT_NE("01/01/2021", fecha_1.AccederFecha());
        fecha_2.AnyadirFecha("?1r93rhfks11112");
        EXPECT_NE("?1r93rhfks11112", fecha_2.AccederFecha());
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
TEST(GreaterThan, negative){
        Fecha fecha_1;
        Fecha fecha_2;
        fecha_2.AnyadirFecha("01/01/2021");
        fecha_1.AnyadirFecha("02/02/2022");
        EXPECT_TRUE(fecha_2 > fecha_1);
}
TEST(AnyoBisiesto, positive){
        Fecha fecha_1;
        fecha_1.AnyadirFecha("01/01/2020");
        EXPECT_TRUE(fecha_1.AnyoBisiesto(fecha_1.AccederFecha()));
}
TEST(AnyoBisiesto, negative){
        Fecha fecha_1;
        fecha_1.AnyadirFecha("01/01/2021");
        EXPECT_FALSE(fecha_1.AnyoBisiesto(fecha_1.AccederFecha()));
}