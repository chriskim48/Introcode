int led = 9;
int brightness = 255;
int amountofTime = 1
int whatIsThisMagicNumber = 9600;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop(){
  Serial.println("look what this changed to" + String(foo, DEC);
  foo = foo + bar;
  if(foo >= 255 || foo <= 0){
    bar = -bar;
  }
  analogWrite(led, brightness);
  Serial.println("I'm setting the led to" + String(brightness, DEC);
  
  delay(amountofTime);
}

#https://github.com/vrazdan/CMU-ChemE-Car/commit/1fd18f0402e0c1291f2a586b75aa871ce3f4be93
