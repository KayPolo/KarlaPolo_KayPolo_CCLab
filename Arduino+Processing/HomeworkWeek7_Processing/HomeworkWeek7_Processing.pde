import processing.serial.*;

Serial myPort; 
int r,g,b;
int val;
String buffer;
int readData;

void setup()
{
size(700, 500);

println(Serial.list());
String portName = Serial.list()[3];
myPort = new Serial(this, portName, 9600);
buffer = "";
readData = 0;

smooth();
noStroke();

}

void draw()
{
if ( myPort.available() > 0) {
val = myPort.read();
println(char(val));
if(val==10){
readData = int(buffer.trim());
buffer = "";
}else{
buffer += char(val);
}
println(buffer);
}
background(#3FA8B0); 

//Ellipse center
ellipseMode(RADIUS);
fill(random (255), random (255),random (255));
ellipse(350, 250, readData*4, readData*4);

fill(#3FA8B0);
rect(width/2- readData*3/2, height/2 - readData*3/2, readData*3, readData*3);

ellipseMode(RADIUS);
fill(random (255), random (255),random (255));
ellipse(350, 250, readData, readData);

fill(#3FA8B0);
rect (width/2- readData/2/2, height/2 - readData/2/2 , readData/2, readData/2);

ellipseMode(RADIUS);
fill(random (255), random (255),random (255));
ellipse(350, 250, readData/8, readData/8);

}
