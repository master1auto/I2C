void main() {

sspstat=0b10010111; 
sspcon=0b10101000;
sspbuf=0b00110000;   //l'adress 0x30
sspcon2=0b00000001;
sspif=0b00001000;   
sspbuf=0b00010000;  //valeur de x=10d
sspcon2=0b00000001;

sspbuf=0b00110000;   //l'adress 0x30
sspcon2=0b00000001;
sspif=0b00001000;
sspbuf=0b00010001; //valeur de y=11d
sspcon2=0b00000001;
}
