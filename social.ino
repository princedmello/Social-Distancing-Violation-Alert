String incomingByte ;    

void setup() {

  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);

}
void loop() {

  if (Serial.available() > 0) {

  incomingByte = Serial.readStringUntil('\n');

    if (incomingByte == "red") {

      digitalWrite(7, HIGH);
      delay(5000);
      digitalWrite(7, LOW);

    }
    
  

    if (incomingByte == "green") {

      digitalWrite(13, HIGH);

    }

    else{

     Serial.write("invald input");

    }

  }

}
