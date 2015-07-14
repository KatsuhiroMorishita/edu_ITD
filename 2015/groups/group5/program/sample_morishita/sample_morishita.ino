const int light_pin = 7;
const int switch_pin = 13;
const int blightness_pin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
  pinMode(blightness_pin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // スイッチチェック
  int a = digitalRead(switch_pin);
  Serial.println(a);
  
  int b = analogRead(blightness_pin);
  Serial.println(b);
  
    
  if(!(a == 1 || b < 700))
    return;
    
  // 点滅
  digitalWrite(light_pin, HIGH);
  delay(1);
  digitalWrite(light_pin, LOW);
  delay(10);

}
