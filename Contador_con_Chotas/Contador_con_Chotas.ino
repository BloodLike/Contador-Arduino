int Display[7] = {2,3,4,5,6,7,8};                                               //PINES DEL DISPLAY 
int unidades = 9, decenas = 10, centenas = 11, millar = 12;   //PINES DE DIGITOS
long a = 0, b = 0, c = 0, d=0;

void setup()
{
  Serial.begin(9600);
  for(int i =0; i<7; i++)
  {
    pinMode(Display[i],OUTPUT);
  }
  for(int i=9; i<13; i++)
  {
    pinMode(i,OUTPUT);
  }

  Limpiar();
}

void loop()
{
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(centenas, LOW);
    c = i;
    for(int j = 0; j < 10; j++)
    {
      digitalWrite(decenas, LOW);
      b = j;
      Digitos(b);
      for(int k = 0; k < 10; k++)
      {
        digitalWrite(unidades, LOW);
        a = k;
        Digitos(a);
        delay(750);
      }
      delay(750);
    }
    delay(750);
  }
}

void Limpiar()
{
  for(int i=0; i<7; i++)
  {
    digitalWrite(Display[i], LOW);  
  }
  for(int i=9; i<13; i++)
  {
    digitalWrite(i,HIGH);
  }
}

void Digitos(long numero)
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
