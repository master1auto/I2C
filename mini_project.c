void main()  {
  // Software I2C connections
sbit Soft_I2C_Scl           at RC3_bit;
sbit Soft_I2C_Sda           at RC4_bit;
sbit Soft_I2C_Scl_Direction at TRISC3_bit;
sbit Soft_I2C_Sda_Direction at TRISC4_bit;
// End Software I2C connections

Soft_I2C_Start();
Soft_I2C_Init();
    error = Soft_I2C_Write(x,y_);
error = Soft_I2C_Write(0x30);
}


