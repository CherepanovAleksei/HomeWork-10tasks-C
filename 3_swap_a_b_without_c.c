/** program #3:swap 'a' & 'b' without 'c'
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}