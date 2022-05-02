#include <stdio.h>

int main(void){
    int dinero=0;
    int retirado=0;
    int cien=0;
    int cincuenta=0;
    int veinte=0;
    int diez=0;
    int cinco=0;
    int uno=0;
    

    printf("Ingrese su monto: ");
    scanf("%d",&dinero);
    printf("su monto sera de %d\n",dinero);  

    if(dinero<20) {       
        printf("el monto es insuficiente para retirar");
        return 1;
    }
     if(dinero>5000) {         
        printf("el monto es demasiado para retirar");
        return 2;
    }
     if(dinero>=20 && dinero<=5000) {       
       if(dinero>=100){
        cien=dinero/100;
        printf("%d billetes de 100",cien);
       }   
       if(dinero>=50){
        cincuenta=(dinero-(cien*100))/50;
        printf("\n%d billetes de 50",cincuenta);
       }   
       if(dinero>=20){
        veinte=(dinero-((cien*100)+(cincuenta*50)))/20;
        printf("\n%d billetes de 20",veinte);
       }   
       if(dinero>=10){
        diez=(dinero-((cien*100)+(cincuenta*50)+(veinte*20)))/10;
        printf("\n%d billetes de 10",diez);
       }  
       if(dinero>=5){
        cinco=(dinero-((cien*100)+(cincuenta*50)+(veinte*20)+(diez*10)))/5;
        printf("\n%d billetes de 5",cinco);
       }   
       if(dinero>=1){
        uno=(dinero-((cien*100)+(cincuenta*50)+(veinte*20)+(diez*10)+(cinco*5)))/1;
        printf("\n%d billetes de 1",uno);
       }    
       
     }
    return 0;  
  
}