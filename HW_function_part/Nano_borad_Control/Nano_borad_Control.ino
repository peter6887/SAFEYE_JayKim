const int vib = 3;
int incomingByte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vib, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    incomingByte = Serial.read();

    if(incomingByte == 'H'){
      digitalWrite(vib, HIGH);
    }
    else if(incomingByte == 'L'){
      digitalWrite(vib, LOW);
    }
  }
}
