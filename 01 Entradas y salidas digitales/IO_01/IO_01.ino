
/*
  Autor: Owltronix

  Secuencia de encendido de un led RGB ( o tres led ) mediante la función Delay
    
 */

// variables

int redLed = 13;    // Led rojo conectado al pin 13 de la placa arduino
int blueLed = 12;   // Led azul conectado al pin 12 de la placa arduino
int greenLed = 11;  // Led verdeojo conectado al pin 11 de la placa arduino


// Esta función se ejecuta una sola vez al presionar reset o encender la tarjeta Arduino
void setup() {

  // configurar salidas digitales
  pinMode( redLed, OUTPUT );
  pinMode( blueLed, OUTPUT );
  pinMode( greenLed, OUTPUT );
  
}

// Este bucle se ejecuta una y otra vez hasta el fin de los tiempos
void loop() {
  // Codigo principal

  digitalWrite( redLed, HIGH );
  digitalWrite( blueLed, LOW );
  digitalWrite( greenLed, LOW );

  delay(5000);

  digitalWrite( redLed, LOW );
  digitalWrite( blueLed, HIGH );
  digitalWrite( greenLed, LOW );

  delay(5000);

  digitalWrite( redLed, LOW );
  digitalWrite( blueLed, LOW );
  digitalWrite( greenLed, HIGH );

  delay(5000);

  digitalWrite( redLed, HIGH );
  digitalWrite( blueLed, HIGH );
  digitalWrite( greenLed, HIGH );

  delay(5000);

  digitalWrite( redLed, LOW );
  digitalWrite( blueLed, LOW );
  digitalWrite( greenLed, LOW );

  delay(1000);
  

}
