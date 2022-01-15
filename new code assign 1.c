#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8] = { 0, 0, 0, 0, 1, 1, 1, 1};
    int b[8] = { 0, 0, 1, 1, 0, 0, 1, 1};
    int c[8] = { 0, 1, 0, 1, 0, 1, 0, 1};
    int i,d[8],e[8],f[8],or_ans;

     int and_ans;

      printf("\n output of BC");

    for (i = 0; i < 8; i++) {

        // using the & operator
        and_ans = b[i] & c[i];
        d[i] = and_ans;

       printf("\n %d AND %d = %d", b[i], c[i], and_ans);
    }


    printf("\n output of A+BC");

    for (i = 0; i < 8; i++) {

        // using the | operator
        or_ans = a[i] | d[i];

        printf("\n %d OR %d = %d", a[i], d[i], or_ans);
    }



     int or_ans1;

     printf("\n output of A+B");

    for (i = 0; i < 8; i++) {

        // using the | operator
        or_ans1 = a[i] | b[i];

        e[i] =  or_ans1;

        printf("\n %d OR %d = %d", a[i], b[i], or_ans1);
    }



       int or_ans2;

     printf("\n output of A+C");

    for (i = 0; i < 8; i++) {

        // using the | operator
        or_ans2 = a[i] | c[i];

        f[i] = or_ans2;

        printf("\n %d OR %d = %d", a[i], c[i], or_ans2);
    }


     int and_ans2;

     printf("\n output of (A+B).(A+C)");

    for (i = 0; i < 8; i++) {

        // using the & operator
        and_ans2 = e[i] & f[i];

        printf("\n %d AND %d = %d", e[i], f[i], and_ans2);
    }


    printf("\n Hence output of A+BC and (A+B).(A+C) are same");

    printf("\n Hence the DISTRIBUTIVE LAW of BOOLEAN ALGEBRA is verified");


}







