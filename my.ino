const int ma1 = 5;
const int ma2 = 6;
const int ea = 3;
const int mb3=9;
const int mb4=10;
const int eb=11;

//int rc=2;
//int valc;

//int ra=7;
//int vala;

//int rb=8;
//int valb;

void setup()
{
  pinMode(ma1, OUTPUT);
  pinMode(ma2, OUTPUT);
  pinMode(ea, OUTPUT);
  pinMode(mb3, OUTPUT);
  pinMode(mb4, OUTPUT);
  pinMode(eb, OUTPUT);

  //pinMode(rc,INPUT);
  //pinMode(ra,INPUT);
  //pinMode(rb,INPUT);
  Serial.begin(9600);
}

void loop()
{
  //valc=digitalRead(rc);
  //vala=digitalRead(ra);
  //valb=digitalRead(rb);
  //if(vala==0&&valc==0&&valb==0)
  //search();
  //if(vala==0&&valc==0&&valb==1)
  //right();
  //if(vala==0&&valc==1&&valb==0)
  //forward();
  //if(vala==0&&valc==1&&valb==1)
  //right();
  //if(vala==1&&valc==0&&valb==0)
  //left();
  //if(vala==1&&valc==1&&valb==0)
  //left();
  //if(vala==1&&valc==1&&valb==1)
  //motor_stop();
  //else
  //return 0;
  forward();
}

void forward()
{
  //motor A
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  analogWrite(ea, 80);
  //motor B
  digitalWrite(mb3, HIGH);
  digitalWrite(mb4, LOW);
  analogWrite(eb, 80);
}

void backward()
{
  //motor A
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, HIGH);
  analogWrite(ea, 80);
  //motor B
  digitalWrite(mb3, LOW);
  digitalWrite(mb4, HIGH);
  analogWrite(eb, 80);
}

void right()
{
  //motor A
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  analogWrite(ea, 80);
  //motor B
  digitalWrite(mb3, HIGH);
  digitalWrite(mb4, LOW);
  analogWrite(eb, 00);
}
void left()
{
  //motor A
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  analogWrite(ea, 00);
  //motor B
  digitalWrite(mb3, HIGH);
  digitalWrite(mb4, LOW);
  analogWrite(eb, 80);
}
void search()
{
 
  //motor A
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, HIGH);
  analogWrite(ea, 50);
  //motor B
  digitalWrite(mb3, HIGH);
  digitalWrite(mb4, LOW);
  analogWrite(eb, 50);
}
void motor_stop()
{
  analogWrite(ea,0); //duty cycle goes to zero for motor A
  analogWrite(eb,0); //duty cycle goes to zero for motor B
}
