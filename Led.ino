//Juvenal Guzmán Condado
//2019, 1/30/2019
using namespace std;
int azul = 8;
int rojo = 9;
int amarillo = 10;

int boton1 = 11;
int boton2 = 12;
int boton3 = 13;

int counter1 = 0;
int counter2 = 0;
int counter3 = 0;

void setup() {
  //Initiate Serial communication.
  Serial.begin(9600);

  // put your setup code here, to run once:
  //set up for the leds
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  pinMode(boton3, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  //The function
  leds();
}

void leds() {

  Serial.println(counter1);
  Serial.println(counter2);
  Serial.println(counter3);
  Serial.println("----------");

  //This makes the leds know how many times the buttons have been pressed
  if (digitalRead(boton1) == HIGH) {
    if (counter1 == 0) {
      counter1 = 1;
      digitalWrite(azul, HIGH);
    } else {
      counter1 = 0;
      digitalWrite(azul, LOW);
    }
  }
  else if (digitalRead(boton2) == HIGH) {
    if (counter2 == 0) {
      counter2 = 1;
      digitalWrite(rojo, HIGH);
    } else {
      counter2 = 0;
      digitalWrite(rojo, LOW);
    }
  }
  else if (digitalRead(boton3) == HIGH) {
    if (counter3 == 0) {
      counter3 = 1;
      digitalWrite(amarillo, HIGH);
    } else {
      counter3 = 0;
      digitalWrite(amarillo, LOW);
    }
  }
  //This delays helps to smooth the press button.. recomend use button lib
  delay(200);
  
}
