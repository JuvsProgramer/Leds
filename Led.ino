//Juvenal Guzmán Condado 
//2019, 1/30/2019
using namespace std; 
int azul = 0; 
int rojo = 1; 
int amarillo = 2; 
int boton1 = 3; 
int boton2 = 4; 
int boton3 = 5; 
int counter1 = 0; 
int counter2 = 0; 
int counter3 = 0;  
void setup() {
  // put your setup code here, to run once:
  //set up for the leds
pinMode(0, OUTPUT);
pinMode(1, OUTPUT); 
pinMode(2, OUTPUT); 
pinMode(3, INPUT); 
pinMode(4, INPUT); 
pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //The function
 leds(); 
}
 void leds(){
  //This makes the leds know how many times the buttons have been pressed
 if(digitalRead (boton1) == HIGH){counter1++;}
 else if(digitalRead (boton2) == HIGH){counter2++;}
 else if (digitalRead (boton3) == HIGH){counter3++;}
 //These are the conditions that tell if the LED needs to be turned on or off
 //FOR BLUE LED
 switch(counter1){
           case 0:
           digitalWrite(azul, LOW);
           digitalWrite(rojo, LOW);
           digitalWrite(amarillo, LOW);
           case 1:
            digitalWrite(azul, HIGH);
            digitalWrite(rojo, LOW);
            digitalWrite(amarillo, LOW);
           case 2: 
            counter1 = 0;
            default:
            counter1 = 0;
            }
  //FOR YELLOW LED
  switch(counter2){
           case 0:
           digitalWrite(azul, LOW);
           digitalWrite(rojo, LOW);
           digitalWrite(amarillo, LOW);
           case 1:
            digitalWrite(azul, LOW);
            digitalWrite(rojo, LOW);
            digitalWrite(amarillo, HIGH);
           case 2: 
            counter2 = 0;
            default:
            counter2 = 0;
            }
//FOR RED LED
switch(counter3){
           case 0:
           digitalWrite(azul, LOW);
           digitalWrite(rojo, LOW);
           digitalWrite(amarillo, LOW);
           case 1:
            digitalWrite(azul, LOW);
            digitalWrite(rojo, HIGH);
            digitalWrite(amarillo, LOW);
           case 2: 
            counter3 = 0;
            default:
            counter3 = 0;
            }         
 }
     
