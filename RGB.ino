int R = 5;
int G = 6;
int B = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int rBrightness = 0;rBrightness < 255;rBrightness++)
    analogWrite(G,rBrightness);
    delay(10);
}
