int led1 = 15;
int led2 = 22;
int led3 = 21;

int tempo = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void all(){

   digitalWrite(led1, HIGH);  
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);

   analogWrite(led1, 255);  
   analogWrite(led2, 255);
   analogWrite(led3, 255);
  
}

// the loop function runs over and over again forever
void loop() {
  all();
}
