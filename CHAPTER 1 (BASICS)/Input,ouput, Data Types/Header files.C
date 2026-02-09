#include<stdio.h>
#include<math.h>   /// It is a new header file which contains the mathematical functions.
int main()
{
    int a,b;
    double c;
    scanf("%d %d", &a,&b);  /// input a,b
    c = pow(a,b);  ///The pow() function is a in built function of the math.h header file. It takes two argument.
    printf("%0.lf",c);  ///The set precision is 0 that why the output only show the digits before the floating point.
}