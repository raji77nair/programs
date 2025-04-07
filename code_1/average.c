#include<stdio.h>

int main()
{
    float n1,n2,n3,n4,n5,exam_score,new_avg;
    float avg,avg1;
    printf("enter the number 1 :  ");
    scanf("%f",&n1);
    printf("enter the number 2 :  ");
    scanf("%f",&n2);
    printf("enter the number 3 :  ");
    scanf("%f",&n3);
    printf("enter the number 4 :  ");
    scanf("%f",&n4);
    
    avg=n1*2+n2*3+n3*4+n4*1;
    
    avg1=avg/10;
    printf("Media: %.1f\n",avg1);
    
if(avg1>=7.0)
{
    printf("Aluno aprovado\n");
}
else if( avg1<=6.9 && avg1>=5.0)
{
    printf("Aluno em exame");
    printf("read one more score: ");
    scanf("%.1f",n5);
    printf("nota de exame %f",n5);
    exam_score=avg1+n5;
    printf(" %f",exam_score);
    new_avg=exam_score/2;
    if(new_avg>=5.0){
    printf("aluno aprovado:%f\n",new_avg);}
    if(new_avg<=4.9){
    printf("aluno reaprovado:%f\n",new_avg);}

}
else if(avg1<=5.0)
{
    printf("Aluno reprovado");
}
else{
    printf("it is not possible");
}
    return 0;


}