// create a header file with name head3.h to calculate the simple and compound interst with the functiion names simple() and compound()

float simple(float p,float n,float r)
{
 return((p*n*r)/100.0);
}
float compound(float p,float n, float r)
{
 return (p*pow(1.0+r/100.0,n));
}