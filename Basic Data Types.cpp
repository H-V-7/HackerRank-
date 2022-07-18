#include <cstdio> 

int main()
{
    int a;
    long int b;
    char ch;
    float d ;
    double e ;
    scanf("%d %ld %c %f %lf",&a,&b,&ch,&d,&e);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n", a , b , ch , d , e);
    return 0;
}