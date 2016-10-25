void setup() {
  // put your setup code here, to run once:

    // habilita o pino 13 para saída digital (OUTPUT)
       
    pinMode (11, OUTPUT); 
    pinMode (12, OUTPUT); 
    pinMode (13, OUTPUT);  

}

void loop() {  
  // put your main code here, to run repeatedly:

  int a = 1;
  if (a == 1)
  {
    // liga o LED.
    // HIGH = acao positiva (+)
    digitalWrite (11, HIGH);  
    delay(3000); 

  }

  // desliga o LED.
  digitalWrite (11, LOW);   
  delay(350); 

   // liga o LED.
  // HIGH = acao positiva (+)
  digitalWrite (12, HIGH);  
  delay(3000); 

  // desliga o LED.
  digitalWrite (12, LOW);   
  delay(350); 

    // liga o LED.
  // HIGH = acao positiva (+)
  digitalWrite (13, HIGH);  
  delay(3000); 

  // desliga o LED.
  digitalWrite (13, LOW);   
  delay(350); 


}
