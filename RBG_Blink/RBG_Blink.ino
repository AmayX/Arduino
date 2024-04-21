int blue=9,green=10,red=11;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  //digitalWrite(blue, HIGH);
  //digitalWrite(red, HIGH);
  //digitalWrite(green, HIGH);
  //setColor(255,192,203);
  //delay(1000);
  // setColor(0,255,0);
  // delay(1000);
  setColor(0,255,255);
  //delay(1000);
  // for (int i=0;i<255;i+=10)
  // {
  //   setColor(i,0,0);
  //   delay(500);
  // }
  // for (int i=0;i<255;i+=10)
  // {
  //   setColor(0,i,0);
  //   delay(500);
  // }
  // for (int i=0;i<255;i+=10)
  // {
  //   setColor(0,0,i);
  //   delay(500);
  // }  

}


void setColor(int r, int g, int b)
{
  //r = 255-r; not for our rgb led
  //g = 255-g;
  //b = 255-b;
  analogWrite(red,r);
  analogWrite(green,g);
  analogWrite(blue,b);
}