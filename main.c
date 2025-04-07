#include <stdio.h>
void f(int n,double a,double b){
    double x;
if(n==1){
        x=a+b;
    printf("Resultado: a + b = %f\n",x);
}else if(n==2){
     x=a-b;
     printf("Resultado: a - b = %f\n",x);
}else if(n==3){
     x=a*b;
   printf("Resultado: a * b = %f\n",x);
}else if(n==4){
    if(b==0){
      printf("Erro: Divisao por zero nao e permitida.\n");
    }else{
     x=a/b;
    printf("Resultado: a / b = %f\n",x);
}}else{
    printf("Operacao invalida");
}
}
int main(){
    int n;
char c='s';
    double a,b;
while(c=='s'){
    printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:\n");
scanf("%d",&n);
if(n==5){
        break;
}else{
printf("digite o primeiro numero:");
scanf("%lf",&a);
printf("\n");
printf("digite o segundo numero:");
scanf("%lf",&b);
printf("\n");
f(n,a,b);
printf("Deseja realizar outra operacao? (s/n):");
scanf(" %c",&c);
if(c!='s'&&c!='n'){
while(c!='s'&&c!='n'){
    printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.");
    scanf(" %c",&c);
}}
}
}
 printf("Obrigado por usar a calculadora! Ate a proxima.");
}
