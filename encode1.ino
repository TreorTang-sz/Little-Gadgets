int Encoder1_OuputA  = 2;
int Encoder1_OuputB  = 3;
int Encoder2_OuputA  = 4;
int Encoder2_OuputB  = 5;
int Previous1_Output,Previous2_Output;
int Encoder1_Count,Encoder2_Count;

void setup() {
  // put your setup code here, to run once:
  pinMode (Encoder1_OuputA, INPUT);
  pinMode (Encoder1_OuputB, INPUT);
  pinMode (Encoder2_OuputA, INPUT);
  pinMode (Encoder2_OuputB, INPUT);
  Previous1_Output = digitalRead(Encoder1_OuputA);
  Previous2_Output = digitalRead(Encoder1_OuputA);
  Serial.begin(115200);
}

void loop() {
  //aVal = digitalRead(pinA);
 
  if (digitalRead(Encoder1_OuputA) != Previous1_Output)
  {
    if (digitalRead(Encoder1_OuputB) != Previous1_Output)
    {
      Encoder1_Count ++;
      Serial.print("Encode1: ");
      Serial.println(Encoder1_Count);
    }
    else
    {
      Encoder1_Count--;
      Serial.print("Encode1: ");
      Serial.println(Encoder1_Count);
    }
  }
  Previous1_Output = digitalRead(Encoder1_OuputA);

  if (digitalRead(Encoder2_OuputA) != Previous2_Output)
  {
    if (digitalRead(Encoder2_OuputB) != Previous2_Output)
    {
      Encoder2_Count ++;
      Serial.print("Encode2: ");
      Serial.println(Encoder2_Count);
    }
    else
    {
      Encoder2_Count--;
      Serial.print("Encode2: ");
      Serial.println(Encoder2_Count);
    }
  }
  Previous2_Output = digitalRead(Encoder2_OuputA);
}
