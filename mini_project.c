

 void main() {

sspstat=0b11000000;
sspcon=0b00001000;
sspcon2=0b00000001;
sspbuf=0b00110000;//l'adress 0x30
while(BF);
pir1=0b10000000;
sspcon2=0b00000001;
sspbuf=0b00010000;                     //valeur de x=10d
  while(sspif !=1)


sspcon2=0b00000001;
sspbuf=0b00110000;                   //l'adress 0x30
while(BF);
pir1=0b10000000;
sspcon2=0b00000001;
sspbuf=0b00010001;                     //valeur de y=11d
  while(sspif !=1)


}
}
