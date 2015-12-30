void main()  {
  ansel = anselh = portc = trisc=0;
                  I2C1_Init(100000);
                   I2C1_Start();
                   sspstat=0b10010111;
                   sspcon=0b10101000;
                   sspbuf=0b01111111;
                   sspcon2=0b00000001;
                         I2C1_Wr(x);
                          I2C1_Wr(y);
                          portc1=I2C1_rd(0x30);
                          I2C_stop();

}
