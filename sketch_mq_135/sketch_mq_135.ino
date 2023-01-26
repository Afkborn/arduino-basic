const int AOUTpin=A3;  // Analog çıkış pini



int ppm;  // Ölçülen ppm değeri



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Seri port başlat
}

void loop() {
  ppm= analogRead(AOUTpin);  // ppm değerini Analog pinden oku
  // put your main code here, to run repeatedly:
  Serial.print(" Hava kirliliği: ");  
  Serial.print(ppm);  //Hava kirliliği miktarını yaz
  Serial.println("ppm.");
  delay(500);
}
