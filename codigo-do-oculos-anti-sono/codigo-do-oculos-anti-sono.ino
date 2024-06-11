int Sinput = A1;    
int Buz=3;          

void setup()     
{
pinMode(Sinput, INPUT);  //configuracao do sensor como input para receber o dado 
pinMode(Buz, OUTPUT);  // configuracao do buzzer como output para ele enviar dado(no caso apitar, caso o olho permaneca fechado) 
}

void loop()  
{
    if(digitalRead(Sinput)==LOW) //se o olho permanecer fechado apos um delay de 2000(2 segundos), o buzzer será acionado
     {
       delay (2000);    
  
       digitalWrite(Buz, HIGH);
     }
     else  // se o olho permanecer aberto,o buzzer permanecera desativado. 
      {
   
        if(digitalRead(Sinput)== HIGH)
            {
              
               digitalWrite(Buz, LOW);
           }
 
      }
   }
