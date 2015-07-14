

const int sw_pin = 8;
const int loudspeaker_pin = 6;
const int base_time = 16 * 100; // 16の倍数が都合がいい

void setup()
{
  pinMode( sw_pin, INPUT);
  pinMode( loudspeaker_pin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int a = digitalRead(sw_pin);
  Serial.println(a);

  if (a == 1)
    return;

  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time * 3 / 2 / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 233); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 220); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 2); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time * 3 / 2 / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 698); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 659); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 294); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 1); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 698); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 659); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 698); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 659); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 494); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 294); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 698); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 659); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  noTone(loudspeaker_pin); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 587); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 4); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 466); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 349); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 440); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 262); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 392); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 880); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 523); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  tone(loudspeaker_pin, 784); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }
  delay(base_time / 8); a = digitalRead(sw_pin); if (a == 1) {
    noTone(loudspeaker_pin);
    return;
  }

  /*
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time * 3 / 2 / 4);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 466);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 4);
  tone(loudspeaker_pin, 466);
  delay(base_time / 4);
  tone(loudspeaker_pin, 466);
  delay(base_time / 4);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  tone(loudspeaker_pin, 233);
  delay(base_time / 8);
  tone(loudspeaker_pin, 220);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 2);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time * 3 / 2 / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 698);
  delay(base_time / 8);
  tone(loudspeaker_pin, 659);
  delay(base_time / 4);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 294);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 1);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 698);
  delay(base_time / 8);
  tone(loudspeaker_pin, 659);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 698);
  delay(base_time / 8);
  tone(loudspeaker_pin, 659);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 494);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 294);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 698);
  delay(base_time / 8);
  tone(loudspeaker_pin, 659);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 587);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 880);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 784);
  delay(base_time / 8);
  */
}

