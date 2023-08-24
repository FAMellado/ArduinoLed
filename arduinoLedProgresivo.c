// C++ code
//

int led_rojo = 11;
int led_amarillo = 10;
int led_verde = 9;

void setup()
{
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_rojo, OUTPUT);
}

void loop()
{
  
  for(int i=0; i<300 ; i++){
  
    analogWrite(led_verde, i);
    delay(10);
    if(i==256){
    
      i=0;
      
    }
    
  }
  
}