void setup()
{		
    Serial.begin(9600);
    calc_area();
}

void calc_area(){
  if(Serial.available()){
  	int h = Serial.parseInt();
	int w = Serial.parseInt();
    int area = h*w;
    Serial.print("The area is : ");
    Serial.println(area);
  }
  
}

void loop()
{
    
}