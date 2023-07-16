void setup()
{		
    Serial.begin(9600);
    
  	int a=10, b=5;
   	Serial.println("Before Swapping:");
    Serial.print("a: ");
    Serial.print(a);
    Serial.print(" ,");
    Serial.print(" b: ");
    Serial.println(b);
  	
    swap(a, b);
  
  	Serial.println("After Swapping:");
  	Serial.print("a: ");
    Serial.print(a);
    Serial.print(" ,");
    Serial.print(" b: ");
    Serial.println(b);
}

void swap(int &a, int &b){
	a = a+b;
  	b = a-b;
  	a = a-b;
}
void loop()
{
    
}