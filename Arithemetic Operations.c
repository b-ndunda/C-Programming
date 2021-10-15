#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,add,sub,mul,div,rem;
        printf("Enter a,b value");
        scanf("%d%d",&a,&b);
        add=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        rem=a%b;
        printf("Result of addition=%d\n",add);
        printf("Result of Subtraction=%d\n",sub);
        printf("Result of multiplication=%d\n",mul);
        printf("Result of Division=%d\n",div);
        printf("Result of modulus=%d\n",rem);

    return 0;
}
