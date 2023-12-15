# include <stdio.h> //elahe baabaaei
# include <math.h>//40223007

void solver (float a, float b, float c ,  int *answer ,float *answer1 ,float *answer2);

int main ()
{
    float a , b , c,a1 , a2;
    int teedad;
    
    printf ("pleaase enter your 3 No\n");
    scanf ("%f%f%f",&a,&b,&c);
    solver (a,b,c,&teedad,&a1,&a2);
    
     if (teedad==2)
     {
       printf ("\nThis equation has %d real roots\n",teedad);
       printf ("root = %f,%f",a1,a2);
     }
     if (teedad==1)
     {
       printf ("\nThis equation has %d real roots\n",teedad);
       printf ("root = %f",a1);
     }

}

void solver (float a, float b, float c ,  int  *answer ,float *answer1 ,float *answer2)
{
    *answer =0;
    if ((a==0)&&(b==0))
        printf ("wrong input\n");

    else
    {
        double delta ;
        delta=((b*b)-4*(a*c));
        if (delta>0)
        {
            *answer1= ((-b+sqrt(delta))/(2*a));
            *answer2 = ((-b-sqrt(delta))/(2*a));
            *answer = 2;
        }
        if (delta==0)
        {
            *answer1 =((-b)/(2*a));
            *answer2 = *answer1;
            *answer =1;
        }
        if (delta<0)
          {
             printf ("This equation has no real roots");
            *answer =0;
          }

    }
}