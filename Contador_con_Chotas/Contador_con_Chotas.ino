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

void digitos(long numero)                                                          //METODO PARA HACER LOS NUMEROS EN EL DISPLAY
{
  if (numero == 0)
  {
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2],HIGH);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], HIGH);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], LOW);
  }

if (numero == 1)
{
  digitalWrite( Display[0], LOW);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], LOW);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], LOW);
  digitalWrite( Display[6], LOW);
}
if (numero == 2)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], LOW);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], HIGH);
  digitalWrite( Display[5], LOW);
  digitalWrite( Display[6], HIGH);
}
if (numero == 3)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], LOW);
  digitalWrite( Display[6], HIGH);
}
if (numero == 4)
{
  digitalWrite( Display[0], LOW);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], LOW);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], HIGH);
}
if ( numero == 5)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], LOW);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], HIGH);
}
if ( numero == 6)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], LOW);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], HIGH);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], HIGH);
}
if (numero == 7)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], LOW);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], LOW);
  digitalWrite( Display[6], LOW);
}
if (numero == 8)
{
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], HIGH);
  digitalWrite( Display[4], HIGH);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], HIGH);
}
if ( numero == 9)
  {
  digitalWrite( Display[0], HIGH);
  digitalWrite( Display[1], HIGH);
  digitalWrite( Display[2], HIGH);
  digitalWrite( Display[3], LOW);
  digitalWrite( Display[4], LOW);
  digitalWrite( Display[5], HIGH);
  digitalWrite( Display[6], HIGH);
  }
}
