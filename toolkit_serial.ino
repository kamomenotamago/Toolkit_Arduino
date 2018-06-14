char val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    val = Serial.read();
  }
   /*if(val=='1'){
   digitalWrite(13,HIGH);
    
   delay(100);
  
   digitalWrite(13,LOW);
   }*/
//ページ１
   if(val=='1'){
   digitalWrite(13,HIGH);
   }
   
   if(val=='2'){
   digitalWrite(13,LOW);
   }

   if(val=='3'){
   digitalWrite(12,HIGH);
   }
   
   if(val=='4'){
   digitalWrite(12,LOW);
   }

   if(val=='5'){
   digitalWrite(11,HIGH);
   }
   
   if(val=='6'){
   digitalWrite(11,LOW);
   }

   if(val=='7'){
   digitalWrite(10,HIGH);
   }
   
   if(val=='8'){
   digitalWrite(10,LOW);
   }
//ページ２
    if(val=='9'){
   digitalWrite(9,HIGH);
   }
   
   if(val=='a'){
   digitalWrite(9,LOW);
   }

   if(val=='b'){
   digitalWrite(8,HIGH);
   }
   
   if(val=='c'){
   digitalWrite(8,LOW);
   }

   if(val=='d'){
   digitalWrite(7,HIGH);
   }
   
   if(val=='e'){
   digitalWrite(7,LOW);
   }

   if(val=='f'){
   digitalWrite(6,HIGH);
   }
   
   if(val=='g'){
   digitalWrite(6,LOW);
   }

    if(val=='h'){
   digitalWrite(5,HIGH);
   }
   
   if(val=='i'){
   digitalWrite(5,LOW);
   }

   if(val=='j'){
   digitalWrite(4,HIGH);
   }
   
   if(val=='k'){
   digitalWrite(4,LOW);
   }

   if(val=='l'){
   digitalWrite(3,HIGH);
   }
   
   if(val=='m'){
   digitalWrite(3,LOW);
   }

   if(val=='n'){
   digitalWrite(2,HIGH);
   }
   
   if(val=='o'){
   digitalWrite(2,LOW);
   }

}
