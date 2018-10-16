
const int RedLed=2;    //LED Pins
const int BlueLed=3;
const int GreenLed=4;
const int OrangeLed=5;
const int YellowLed=6;

const int Buzzer=13;

void setup() {
 Serial.begin(9600);
 Serial.println("All Fine");

 pinMode( RedLed,OUTPUT);
 pinMode( BlueLed,OUTPUT);
 pinMode( GreenLed,OUTPUT);
 pinMode( OrangeLed,OUTPUT);
 pinMode( YellowLed,OUTPUT);
 pinMode( Buzzer,OUTPUT);


 delay(500);
 digitalWrite(RedLed,HIGH);
 digitalWrite(BlueLed,HIGH);
 digitalWrite(GreenLed,HIGH);
 digitalWrite(OrangeLed,HIGH);
 digitalWrite(YellowLed,HIGH);
 delay(2000);
 //Begin State
 digitalWrite(RedLed,LOW);
 digitalWrite(BlueLed,LOW);
 digitalWrite(GreenLed,LOW);
 digitalWrite(OrangeLed,LOW);
 digitalWrite(YellowLed,LOW);


}

void loop() {

delay(2000);
 digitalWrite(RedLed,HIGH);
 digitalWrite(BlueLed,HIGH);
 digitalWrite(GreenLed,HIGH);
 digitalWrite(OrangeLed,HIGH);
 digitalWrite(YellowLed,HIGH);
 digitalWrite(Buzzer,HIGH);
 delay(2000);
 //Begin State
 Serial.println("All Fine");
 digitalWrite(RedLed,LOW);
 digitalWrite(BlueLed,LOW);
 digitalWrite(GreenLed,LOW);
 digitalWrite(OrangeLed,LOW);
 digitalWrite(YellowLed,LOW);
 digitalWrite(Buzzer,LOW);



}
