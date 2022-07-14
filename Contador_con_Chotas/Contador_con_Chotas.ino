int Display[7] = {2,3,4,5,6,7,8};                                               //PINES DEL DISPLAY 
int unidades = 9, decenas = 10, centenas = 11, millar = 12;   //PINES DE DIGITOS
int a=0,b=0,c=0,d=0;

void setup() {
  
for(int i=0; i<7; i++){                                                                 //FOR DE 1 AL 6
pinMode(Display[i], OUTPUT);                                                 //DECLARAR TODO EL CONTENIDO DEL ARRAY COMO SALIDA
}
for (int i=9; i<13; i++){                                                               //FOR 9 AL 13
pinMode(i,OUTPUT);                                                                //PINES 9 AL 12 COMO SALIDA
}
}

void loop() {


}
