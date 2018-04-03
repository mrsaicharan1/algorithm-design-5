#include <stdio.h>
#include <math.h>
int main()
{
    int k,i,p;
    double x,correct_value,estimated_value,expression,accuracy;
    scanf("%lf %d",&x,&k);
    
    if(x<-1 || x>1)
    {
        printf("arcsin(x) doesnt exist for the given x\n");
    }
    else {
        correct_value=asin(x);
        expression = x;
        estimated_value=expression;
        for(i=1;i<k;i++)
        {
          p=(2*(i));
          expression= expression* (x*x)*(p-1)*(p-1)/((p)*(p+1));
          estimated_value = estimated_value + expression;
        }
        accuracy = (estimated_value/correct_value)*100;
        printf("Estimated Value= %.5lf \nActual Value= %.5lf \nAccuracy= %.5lf",estimated_value,correct_value,accuracy);
    }
    return 0;
}
