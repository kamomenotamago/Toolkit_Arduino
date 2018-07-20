unsigned char val;
const int val_size = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
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
  pinMode(1,OUTPUT);

}

void loop() {
  if(Serial.available() >= val_size){//データを発見したら
    int head = Serial.read();

      if(head==1){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(1,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(1,val);//PWM
        }
        
      }else if(head==2){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(2,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(2,val);//PWM
        }
        
      }else if(head==3){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(3,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(3,val);//PWM
        }
        
      }else if(head==4){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(4,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(4,val);//PWM
        }
        
      }else if(head==5){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(5,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(5,val);//PWM
        }
        
      }else if(head==6){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(6,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(6,val);//PWM
        }
         
      }else if(head==7){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(7,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(7,val);//PWM
        }
        
      }else if(head==8){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(8,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(8,val);//PWM
        }
        
      }else if(head==9){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(9,LOW);
        }else{
        //Serial.println(val,DEC);
          analogWrite(9,val);//PWM
        }
        
      }else if(head==10){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(10,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(10,val);//PWM
        }
        
      }else if(head==11){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(11,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(11,val);//PWM
        }
        
      }else if(head==12){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(12,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(12,val);//PWM
        }
        
      }else if(head==13){
        val = Serial.read();
        //Serial.print(head,DEC);
        if(val==0){
          analogWrite(13,LOW);
        }else{
          //Serial.println(val,DEC);
          analogWrite(13,val);//PWM
        }
     } 
     
  }else{
  }
 }
  
