#include<iostream>

void ExerciseTwoFive()
{
    // (a)
    'a';   // character literal, type is `char`
    L'a';  // wide character literal, type is `wchar_t`
    "a";   // character string literal
    L"a";  // wide character string literal

    // (b)
    10;    // integral literal, type is `int`
    10u;   // unsigned integral literal, type is `unsigned int`
    10L;   // integral literal, type is `long int`
    10uL;  // unsigned integral literal, type is `unsigned long int`
    012;   // octal integral literal, type is `int`
    0xC;   // hexadecimal integral literal, type is `int`

    // (c)
    3.14;   // floating-point literal, type is `double`
    3.14f;  // floating-point literal, type is `float`
    3.14L;  // floating-point literal, type is `long double`

    // (d)
    10;     // integral literal, type is `int`
    10u;    // unsigned integral literal, type is `unsigned int`
    10.;    // floating-point literal, type is `double`
    10e-2;  // floating-point literal, type is `double`
}

void ExerciseTwoSix()
{
    // this become int literal
    int month = 9, day = 7;
    // this become octal literal, and 09 goes error since octal only can have 7 as it max.
    //int month = 09, day = 07;
}

void ExerciseTwoSeven()
{
    "Who goes with F\145rgus?\012";  // character string literal containing two octal escape sequences
    3.14e1L;  // floating-point literal, type is `long double`
    //1024f;  // error::int literal using float sign is illegal.
    3.14L;  // floating-point literal, type is `long double`
}

void ExerciseTwoEight()
{
    printf_s("2\n\115");
}

int main()
{
    ExerciseTwoEight();
}