int volt = 9;
int Button = 12;
int val = 1;
int LED_1 = 3;
int LED_2 = 4;
int LED_3 = 5;
int count = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(Button,INPUT);
  pinMode(volt, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  
  
}

void loop() 
{
  val = digitalRead(Button);
  if(val == 0)
  {
    count++ ;
    if(count == 1)
    {
      digitalWrite(LED_1,HIGH);
    }
    else if(count == 2)
    {
      digitalWrite(LED_2,HIGH);
    }
    else if(count == 3)
    {
      digitalWrite(LED_3,HIGH);
    }
    else
    {
      digitalWrite(LED_1,LOW);
      digitalWrite(LED_2,LOW);
      digitalWrite(LED_3,LOW);
      count = 0;
    }
  }

}
