
/*Programa que mantiene encendido el Led builtin del ESP8266
 * hasta que se pulsa el boton de flash.
 * Cuando se sielta el boton de flash el led se vuelve a encender
 */

#define ledin D4       //El led interno del ESP8266 esta conectador a GPIO02 que en nodeMCU se corresponde con D4 
#define pulsadorin D3  //El pulsador FLASH del nodeMCU esta conectado al GPIO0 que en la placa se corresponde con D3

// the setup function runs once when you press reset or power the board
void setup() {

   Serial.begin(115200);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledin, OUTPUT);
  pinMode(pulsadorin, INPUT);
  delay(1000);
  Serial.print('\n');
  Serial.println("listo");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledin, LOW);   // turn the LED on (HIGH is the voltage level)
  if (digitalRead(pulsadorin)==0){
  digitalWrite(ledin, HIGH);   
  Serial.print("flash button= ");
  Serial.println(digitalRead(pulsadorin));
  }
}
