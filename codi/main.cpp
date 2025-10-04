[code]

/**
 * TREBALL DE RECERCA: Com un braç robòtic pot ajudar persones amb mobilitat reduïda
 * Autor: Miquel Monserrat Palau
 * Curs: 2 BATX - C
 * Institut Manuel de Cabanyes (Vilanova i la Geltrú)
*/

#include <Servo.h>
// Ara declararem els 5 servos.
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

// Aquí declarem els pins analògics de cada potenciòmetre.
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
int pot5 = A4;
void setup() {
  // Connectem els servos als pins digitals
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
 
}

void loop() {
  // Declarem els 5 "pot"
  int valor1 = analogRead(pot1);              
  int valor2 = analogRead(pot2);    
  int valor3 = analogRead(pot3);
  int valor4 = analogRead(pot4);
  int valor5 = analogRead(pot5);    

  // Convertim els valors del potenciòmetre en angles perquè es mogui el servo.
  int angle1 = map(valor1, 0, 1023, 0, 180);  
  int angle2 = map(valor2, 0, 1023, 40, 140);
  int angle3 = map(valor3, 0, 1023, 120, 180);
  int angle4 = map(valor4, 0, 1023, 90, 180);
  int angle5 = map(valor5, 0, 1023, 0, 110);

  // Movem els diferents servos.
  servo1.write(angle1);                      
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);
  servo5.write(angle5);
 
  delay(10); // Li afegim uns pausa de 0,01 segons desde que li diem al potenciòmetre que es mogui fins que ho fa.'    
}
[/code]