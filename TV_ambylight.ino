
#include <Adafruit_NeoPixel.h> //Dołączenie biblioteki

 
//Konfiguracja linijki
Adafruit_NeoPixel linijka = Adafruit_NeoPixel(30, 2, NEO_GRB + NEO_KHZ800);
int a=0;
int b=0;
int c=0;

void setup() {
  linijka.begin(); //Inicjalizacja
  linijka.show(); 
  Serial.begin(9600);

  //green();
}
 
void loop() {


  a=255;
  b=255;
  c=255;
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(10000);

  for(c=255;c>0;c--){
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(b=255;b>0;b--){
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(c=0;c<255;c++){  
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(a=255;a>0;a--){
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(b=0;b<255;b++){  
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(c=255;c>0;c--){
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(c=0;c<255;c++){  
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
  for(a=0;a<255;a++){  
  linijka.setPixelColor(0, linijka.Color(a, b, c));
  linijka.setPixelColor(1, linijka.Color(a, b, c));
  linijka.setPixelColor(2, linijka.Color(a, b, c));
  linijka.setPixelColor(3, linijka.Color(a, b, c));
  linijka.setPixelColor(4, linijka.Color(a, b, c));
  linijka.setPixelColor(5, linijka.Color(a, b, c));
  linijka.setPixelColor(6, linijka.Color(a, b, c));
  linijka.setPixelColor(7, linijka.Color(a, b, c));
  linijka.setPixelColor(8, linijka.Color(a, b, c));
  linijka.setPixelColor(9, linijka.Color(a, b, c));
  linijka.setPixelColor(10, linijka.Color(a, b, c));
  linijka.setPixelColor(11, linijka.Color(a, b, c));
  linijka.setPixelColor(12, linijka.Color(a, b, c));
  linijka.setPixelColor(13, linijka.Color(a, b, c));
  linijka.setPixelColor(14, linijka.Color(a, b, c));
  linijka.setPixelColor(15, linijka.Color(a, b, c));
  linijka.setPixelColor(16, linijka.Color(a, b, c));
  linijka.setPixelColor(17, linijka.Color(a, b, c));
  linijka.setPixelColor(18, linijka.Color(a, b, c));
  linijka.setPixelColor(19, linijka.Color(a, b, c));
  linijka.setPixelColor(20, linijka.Color(a, b, c));
  linijka.setPixelColor(21, linijka.Color(a, b, c));
  linijka.setPixelColor(22, linijka.Color(a, b, c));
  linijka.setPixelColor(23, linijka.Color(a, b, c));
  linijka.setPixelColor(24, linijka.Color(a, b, c));
  linijka.setPixelColor(25, linijka.Color(a, b, c));
  linijka.setPixelColor(26, linijka.Color(a, b, c));
  linijka.setPixelColor(27, linijka.Color(a, b, c));
  linijka.setPixelColor(28, linijka.Color(a, b, c));
  linijka.setPixelColor(29, linijka.Color(a, b, c));
  linijka.show();
  delay(100);
  }
  delay(30000);
  delay(30000);
}
