#include <stdio.h>
void f(int n,double a,double b){
    float x;
if(n==1){
        x=a+b;
    printf("Resultado: a + b = %f\n",x);
}else if(n==2){
     x=a-b;
     printf("Resultado: a - b = %f\n",a-b);
}else if(n==3){
     x=a*b;
   printf("Resultado: a * b = %f\n",a*b);
}else if(n==4 && b!=0){
     x=a/b;
    printf("Resultado: a / b = %f\n",a/b);
}else{
printf("Erro: Divis�o por zero n�o � permitida.\n");
}
}
int main(){
    int n;
    char c='s';
    float a,b;
while(c=='s'){
    printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:\n");
scanf("%d",&n);
if(n==5){
        break;
}else{
printf("digite o primeiro numero:");
scanf("%f",&a);
printf("\n");
printf("digite o segundo numero:");
scanf("%f",&b);
printf("\n");
f(n,a,b);
printf("Deseja realizar outra operacao? (s/n):");
scanf("%c",&c);
if(c!='s'&&c!='n'){
while(c!='s'&&c!='n'){
    printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.");
    scanf("%c",&c);
}}
}
}
 printf("Obrigado por usar a calculadora! Ate a proxima.");
}

