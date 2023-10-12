// 1.1 WAP to Print 1 to 10 using while loop.

#include <stdio.h>
int main()
{
    int count = 1;

    while (count < 11)
    {
        printf("\n %d", count);
        count++;
    }
    return 0;
}

/*

Output:

 1
 2
 3
 4
 5
 6
 7
 8
 9
 10

*/

// 1.2 WAP to Print 10 to 1 using while loop.

#include <stdio.h>
int main()
{
    int count = 10;

    while (count > 0)
    {
        printf("\n %d", count);
        count--;
    }
    return 0;
}

/*

Output:

 10
 9
 8
 7
 6
 5
 4
 3
 2
 1

*/

// 1.3 WAP to Print 1 to N using while loop.

#include <stdio.h>
int main()
{
    int count = 1, N;

    printf("Enter a number :");
    scanf("%d", &N);

    while (count <= N)
    {
        printf("\n %d", count);
        count++;
    }
    return 0;
}

/*

Output:

Enter a number :5

 1
 2
 3
 4
 5

*/

// 1.4 WAP to Print N to 1 using while loop.

#include <stdio.h>
int main()
{
    int N;

    printf("Enter a number :");
    scanf("%d", &N);

    while (N >= 1)
    {
        printf("\n %d", N);
        N--;
    }
    return 0;
}

/*

Output:

Enter a number :5

 5
 4
 3
 2
 1

*/

// 1.5 WAP to print odd no. from 1 to N using while loop.

#include <stdio.h>

int main()
{
    int N;

    printf("Enter a value for N: ");
    scanf("%d", &N);

    printf("Odd numbers from 1 to %d:\n", N);

    int number = 1;
    while (number <= N)
    {
        if (number % 2 != 0)
        {
            printf("\n %d ", number);
        }
        number++;
    }

    return 0;
}

/*

Output:

Enter a value for N: 10
Odd numbers from 1 to 10:
1
3
5
7
9

*/

// 1.6 WAP to print even no. from 1 to N using while loop.

#include <stdio.h>

int main()
{
    int N;

    printf("Enter a value for N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d:\n", N);

    int number = 1;
    while (number <= N)
    {
        if (number % 2 == 0)
        {
            printf("\n %d ", number);
        }
        number++;
    }

    return 0;
}

/*

Output:

Enter a value for N: 20
Even numbers from 1 to 20:

 2
 4
 6
 8
 10
 12
 14
 16
 18
 20

*/

// 1.7: WAP to Find leap year from 2000 to 3000 using while loop.

#include <stdio.h>

int main()
{
    int year = 2000;

    printf("Leap years from 2000 to 3000:\n");

    while (year <= 3000)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d : is a leap year\n", year);
        }
        year++;
    }

    return 0;
}

/*

Output:

Leap years from 2000 to 3000:
2000 : is a leap year
2004 : is a leap year
2008 : is a leap year
2012 : is a leap year
2016 : is a leap year
2020 : is a leap year
2024 : is a leap year
2028 : is a leap year
2032 : is a leap year
2036 : is a leap year
2040 : is a leap year
2044 : is a leap year
2048 : is a leap year
2052 : is a leap year
2056 : is a leap year
2060 : is a leap year
2064 : is a leap year
2068 : is a leap year
2072 : is a leap year
2076 : is a leap year
2080 : is a leap year
2084 : is a leap year
2088 : is a leap year
2092 : is a leap year
2096 : is a leap year
2104 : is a leap year
2108 : is a leap year
2112 : is a leap year
2116 : is a leap year
2120 : is a leap year
2124 : is a leap year
2128 : is a leap year
2132 : is a leap year
2136 : is a leap year
2140 : is a leap year
2144 : is a leap year
2148 : is a leap year
2152 : is a leap year
2156 : is a leap year
2160 : is a leap year
2164 : is a leap year
2168 : is a leap year
2172 : is a leap year
2176 : is a leap year
2180 : is a leap year
2184 : is a leap year
2188 : is a leap year
2192 : is a leap year
2196 : is a leap year
2204 : is a leap year
2208 : is a leap year
2212 : is a leap year
2216 : is a leap year
2220 : is a leap year
2224 : is a leap year
2228 : is a leap year
2232 : is a leap year
2236 : is a leap year
2240 : is a leap year
2244 : is a leap year
2248 : is a leap year
2252 : is a leap year
2256 : is a leap year
2260 : is a leap year
2264 : is a leap year
2268 : is a leap year
2272 : is a leap year
2276 : is a leap year
2280 : is a leap year
2284 : is a leap year
2288 : is a leap year
2292 : is a leap year
2296 : is a leap year
2304 : is a leap year
2308 : is a leap year
2312 : is a leap year
2316 : is a leap year
2320 : is a leap year
2324 : is a leap year
2328 : is a leap year
2332 : is a leap year
2336 : is a leap year
2340 : is a leap year
2344 : is a leap year
2348 : is a leap year
2352 : is a leap year
2356 : is a leap year
2360 : is a leap year
2364 : is a leap year
2368 : is a leap year
2372 : is a leap year
2376 : is a leap year
2380 : is a leap year
2384 : is a leap year
2388 : is a leap year
2392 : is a leap year
2396 : is a leap year
2400 : is a leap year
2404 : is a leap year
2408 : is a leap year
2412 : is a leap year
2416 : is a leap year
2420 : is a leap year
2424 : is a leap year
2428 : is a leap year
2432 : is a leap year
2436 : is a leap year
2440 : is a leap year
2444 : is a leap year
2448 : is a leap year
2452 : is a leap year
2456 : is a leap year
2460 : is a leap year
2464 : is a leap year
2468 : is a leap year
2472 : is a leap year
2476 : is a leap year
2480 : is a leap year
2484 : is a leap year
2488 : is a leap year
2492 : is a leap year
2496 : is a leap year
2504 : is a leap year
2508 : is a leap year
2512 : is a leap year
2516 : is a leap year
2520 : is a leap year
2524 : is a leap year
2528 : is a leap year
2532 : is a leap year
2536 : is a leap year
2540 : is a leap year
2544 : is a leap year
2548 : is a leap year
2552 : is a leap year
2556 : is a leap year
2560 : is a leap year
2564 : is a leap year
2568 : is a leap year
2572 : is a leap year
2576 : is a leap year
2580 : is a leap year
2584 : is a leap year
2588 : is a leap year
2592 : is a leap year
2596 : is a leap year
2604 : is a leap year
2608 : is a leap year
2612 : is a leap year
2616 : is a leap year
2620 : is a leap year
2624 : is a leap year
2628 : is a leap year
2632 : is a leap year
2636 : is a leap year
2640 : is a leap year
2644 : is a leap year
2648 : is a leap year
2652 : is a leap year
2656 : is a leap year
2660 : is a leap year
2664 : is a leap year
2668 : is a leap year
2672 : is a leap year
2676 : is a leap year
2680 : is a leap year
2684 : is a leap year
2688 : is a leap year
2692 : is a leap year
2696 : is a leap year
2704 : is a leap year
2708 : is a leap year
2712 : is a leap year
2716 : is a leap year
2720 : is a leap year
2724 : is a leap year
2728 : is a leap year
2732 : is a leap year
2736 : is a leap year
2740 : is a leap year
2744 : is a leap year
2748 : is a leap year
2752 : is a leap year
2756 : is a leap year
2760 : is a leap year
2764 : is a leap year
2768 : is a leap year
2772 : is a leap year
2776 : is a leap year
2780 : is a leap year
2784 : is a leap year
2788 : is a leap year
2792 : is a leap year
2796 : is a leap year
2800 : is a leap year
2804 : is a leap year
2808 : is a leap year
2812 : is a leap year
2816 : is a leap year
2820 : is a leap year
2824 : is a leap year
2828 : is a leap year
2832 : is a leap year
2836 : is a leap year
2840 : is a leap year
2844 : is a leap year
2848 : is a leap year
2852 : is a leap year
2856 : is a leap year
2860 : is a leap year
2864 : is a leap year
2868 : is a leap year
2872 : is a leap year
2876 : is a leap year
2880 : is a leap year
2884 : is a leap year
2888 : is a leap year
2892 : is a leap year
2896 : is a leap year
2904 : is a leap year
2908 : is a leap year
2912 : is a leap year
2916 : is a leap year
2920 : is a leap year
2924 : is a leap year
2928 : is a leap year
2932 : is a leap year
2936 : is a leap year
2940 : is a leap year
2944 : is a leap year
2948 : is a leap year
2952 : is a leap year
2956 : is a leap year
2960 : is a leap year
2964 : is a leap year
2968 : is a leap year
2972 : is a leap year
2976 : is a leap year
2980 : is a leap year
2984 : is a leap year
2988 : is a leap year
2992 : is a leap year
2996 : is a leap year

*/

// 1.8 :WAP to print sum 1 to N using while loop.

#include <stdio.h>

int main()
{
    int N;
    int sum = 0;

    printf("Enter a Number for sum : ");
    scanf("%d", &N);

    int i = 1;

    while (i <= N)
    {
        sum += i;
        i++;
    }

    printf("Sum of 1 to %d is: %d\n", N, sum);

    return 0;
}

/*

Output:

Enter a Number for sum : 10
Sum of 1 to 10 is: 55

*/

// 1.9 : WAP to calculate the factorial of N. using while loop.

#include <stdio.h>

int main()
{
    int N;

    printf("Enter a non-negative integer N: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int factorial = 1;
        int i = 1;

        while (i <= N)
        {
            factorial *= i;
            i++;
        }

        printf("Factorial of %d is %d\n", N, factorial);
    }

    return 0;
}

/*

Output:



*/

// 1.10 : WAP to print thr multiplicat,on table of N using while loop.

#include <stdio.h>

int main()
{
    int N;

    printf("Which number of table do you want : ");
    scanf("%d", &N);

    printf("Table for %d:\n", N);

    int i = 1;
    while (i <= 10)
    { 
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    }

    return 0;
}

/*

Output:

Which number of table do you want : 9
Table for 9:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90

*/
