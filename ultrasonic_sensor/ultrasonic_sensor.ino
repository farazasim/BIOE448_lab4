const int trigPin = 11;
const int echoPin = 12;
long duration;
int distanceCm, distanceInch;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distanceCm = duration * 0.0172;
distanceInch = duration * 0.00675;
Serial.print("Distance: ");
Serial.print(distanceCm);
Serial.print(" cm/");
Serial.print(distanceInch);
Serial.println(" in");
delay(1000);
}
