
void setup() {
  // initialize serial:
  Serial.begin(9600);
string message="1234001100111111111111111111";

}

void loop() {
  // if there's any serial available, read it:
 // while (Serial.available() > 0) {


      Serial.print(message);
      Serial.println (message.length);

    delay (5000);
  //}
}
