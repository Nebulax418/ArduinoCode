const int motorIn1 = 9;

const int motorIn2 = 10;

void setup()

{

  pinMode(motorIn1,OUTPUT);  //initialize the motorIn1 pin as output 
  pinMode(motorIn2,OUTPUT);  //initialize the motorIn2 pin as output 

}

void loop() {

  int a = 10;
  while(a != 0) {
    clockwise(200);  //rotate clockwise 
    delay(100);
    if(a == 5 || a == 7 || a == 3) {
       counterclockwise(200);  //rotate counterclockwise
       delay(100); 
    }
    a-=1
  }
}

void clockwise(int speed) {

  int half = speed / 2;
  
  while(speed != half) {
    analogWrite(motorIn1, speed);  //set the speed of motor
    analogWrite(motorIn2, speed);  //stop the motorIn2 pin of motor
    speed-=10;
  }
  

}

void counterclockwise(int speed) {

  int half = speed / 2;
  
  while(speed != half) {
    analogWrite(motorIn1, 0);  //set the speed of motor
    analogWrite(motorIn2, speed);  //stop the motorIn2 pin of motor
    speed-=10;
  }
}
